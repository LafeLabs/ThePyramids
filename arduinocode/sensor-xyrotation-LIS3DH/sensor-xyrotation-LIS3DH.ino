
// Basic demo for accelerometer readings from Adafruit LIS3DH

#include <Wire.h>
#include <SPI.h>
#include <Adafruit_LIS3DH.h>
#include <Adafruit_Sensor.h>

// Used for software SPI
#define LIS3DH_CLK 13
#define LIS3DH_MISO 12
#define LIS3DH_MOSI 11
// Used for hardware & software SPI
#define LIS3DH_CS 10

// software SPI
//Adafruit_LIS3DH lis = Adafruit_LIS3DH(LIS3DH_CS, LIS3DH_MOSI, LIS3DH_MISO, LIS3DH_CLK);
// hardware SPI
//Adafruit_LIS3DH lis = Adafruit_LIS3DH(LIS3DH_CS);
// I2C
Adafruit_LIS3DH lis = Adafruit_LIS3DH();


//P = Cos[omega*t]
float P[] = {1.00,0.92,0.71,0.38,0.00,-0.38,-0.71,-0.92,-1.00,-0.92,-0.71,-0.38,0.00,0.38,0.71,0.92};
//Q = Sin[omega*t]*Exp[t/tau]
float Q[] = {0.00,0.38,0.71,0.92,1.00,0.92,0.71,0.38,0.00,-0.38,-0.71,-0.92,-1.00,-0.92,-0.71,-0.38};
      
float p=0.0;  //integrated sin power
float q=0.0;  //integrated cos power
//x = input variable array
float x[] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
float xmean = 0.0;
//y = input variable array
float y[] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
float ymean = 0.0;

int m=0;
float F = 0.0;
float Fmax = 1023.0;
float gamma = 7.0;
float vold = 0.0;
float vnew = 0.0;
int deltat = 30;  //3 Hz/8
float v=0.0;
float vmax = 255.0;
float vmin = 20.0;

float k = 20.0;
float n = 0.0;
int tau = 500;
int i = 0;

int motorpin = 5;

int motorspeed = 0;

void setup(void) {
  n = tau/deltat;
  pinMode(motorpin,OUTPUT);
  analogWrite(motorpin,0);

  Serial.begin(9600);
  while (!Serial) delay(10);     // will pause Zero, Leonardo, etc until serial console opens

  Serial.println("LIS3DH test!");
  
  if (! lis.begin(0x18)) {   // change this to 0x19 for alternative i2c address
    Serial.println("Couldnt start");
    while (1) yield();
  }
  Serial.println("LIS3DH found!");
  
  lis.setRange(LIS3DH_RANGE_4_G);   // 2, 4, 8 or 16 G!
  
  Serial.print("Range = "); Serial.print(2 << lis.getRange());  
  Serial.println("G");
}

void loop() {

  for (m = 15; m > 0; m--){
   x[m] = x[m-1]; 
   y[m] = y[m-1];
  }

  i++;
  if(i>15){
    i = 0;
  }

  
  lis.read();      // get X Y and Z data at once

  /* Or....get a new sensor event, normalized */ 
  sensors_event_t event; 
  lis.getEvent(&event);
  
  /* Display the results (acceleration is measured in m/s^2) */

  x[0] = event.acceleration.x;
  y[0] = event.acceleration.y;

  p=0.0;
  q=0.0;
  for (m = 0; m < 16;m++){
     p = p + P[m]*x[m];
     q = q + Q[m]*x[m];
  }
  F = k*sqrt(p*p + q*q)/16;

//add the second axis, repeating all math to get a force, then adding it to the main force, and dividing by 2 to normalize
  p=0.0;
  q=0.0;
  for (m = 0; m < 16;m++){
     p = p + P[m]*y[m];
     q = q + Q[m]*y[m];
  }
  F += k*sqrt(p*p + q*q)/16;

  F /= 2;

  if (F > Fmax){
    F = Fmax;
  }  
  vnew = vold + ((F*gamma - vold)/n);
  
  vold = vnew;


  motorspeed = vnew;  
  if (vnew > vmax)
  {
    motorspeed = vmax;
  }  
  if (vnew < vmin){
    motorspeed = 0;
  }

  
  analogWrite(motorpin,motorspeed);
  
  Serial.println(motorspeed);

//Serial.print(vnew);
//  Serial.print(",");
 // Serial.print(P[i]);
 // Serial.print(",");  
 // Serial.println(x[0]);
  
  //  Serial.print(","); Serial.print(event.acceleration.y); 
  //Serial.print(","); Serial.println(event.acceleration.z); 

  //Serial.println();
   

  delay(deltat); 

}
