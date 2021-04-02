/*
 * TRASH ROBOT RELAXATION OSCILLATOR BOARD PROGRAM
 * 
 * NO COPYRIGHTS NO PATENTS NO PROPERTY NO MONEY NO MINING
 * 
 * 
 */


int pinkout = 12;
int pinkin = A1;
int purpleout = 11;
int purplein = A0;

int pink = 0;
int pinkhigh = 0;
int pinklow = 0;
int purple  = 0;
int purplehigh = 0;
int purplelow = 0;

void setup() {
  Serial.begin(115200);
  pinMode(purpleout,OUTPUT); //purple(lower frequency)
  digitalWrite(purpleout,LOW); 
  pinMode(pinkout,OUTPUT); //pink(higher frequenc)
  digitalWrite(pinkout,LOW); 
  pink = analogRead(pinkin);
  pinkhigh = 512 + analogRead(A3)/2;
  pinklow = analogRead(A2)/2;

  purple = analogRead(purplein);
  purplehigh = 512 + analogRead(A5)/2;
  purplelow = analogRead(A4)/2;
  digitalWrite(pinkout,LOW);
}

void loop() {

  pink = analogRead(pinkin);
  pinkhigh = analogRead(A3);
  pinklow = analogRead(A2);
  purple = analogRead(purplein);
  purplehigh = analogRead(A5);
  purplelow = analogRead(A4);

  if(purple > 512 + purplehigh/2){
    digitalWrite(purpleout,LOW);
  }
  if(purple < purplelow/2){
    digitalWrite(purpleout,HIGH);
  }

  Serial.println(purple);
  
//  delay(1);

}
