//Trash Robot Code for uno shield v5


//NO MONEY
//NO MINING
//NO PROPERTY
//DEATH TO COPYRIGHT!!!!! INTELLECTUAL "PROPERTY" IS VIOLENCE!!!  DESTROY SILICON VALLEY!!!!

int knob = 0;

int motorpin = 5;


void setup() {
    pinMode(motorpin,OUTPUT);
    analogWrite(motorpin,0);
    knob = analogRead(A1);
    Serial.begin(9600);

}

void loop() {
    knob = analogRead(A1);

  analogWrite(motorpin,knob/4);
  Serial.println("button 1");
  delay(100);  
  Serial.println(knob); 

}
