int rojoLed1=12;
int amarilloLed=11;
int verdeLed1=10;
int rojoLed2=9;
int verdeLed2=8;
int pulsadorPin=2;
int delayTime1=5000;
int delayTime2=2000;
int state=0;
 
void setup(){
 pinMode(rojoLed1, OUTPUT);
 pinMode(amarilloLed, OUTPUT);
 pinMode(verdeLed1, OUTPUT);
 pinMode(rojoLed2, OUTPUT);
 pinMode(verdeLed2, OUTPUT);
 pinMode(pulsadorPin, INPUT);
}
 
void loop(){
 digitalWrite(verdeLed1, HIGH);
 digitalWrite(rojoLed2, HIGH);
 
 state=digitalRead(pulsadorPin);
 
 if(state==HIGH){
 digitalWrite(verdeLed1, LOW);
 digitalWrite(amarilloLed, HIGH);
 delay(delayTime2);
 
 digitalWrite(amarilloLed, LOW);
 digitalWrite(rojoLed1, HIGH);
 digitalWrite(rojoLed2, LOW);
 digitalWrite(verdeLed2, HIGH);
 delay(5000);
 
 digitalWrite(rojoLed1, LOW);
 digitalWrite(verdeLed2, LOW);
 }
}
