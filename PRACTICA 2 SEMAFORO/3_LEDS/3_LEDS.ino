int led1=3;
int led2=4;
int led3=5;
int led4=8;
void setup(){
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(8,OUTPUT);
  }
void loop(){
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  delay(1000);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
   digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(1000);
  }
