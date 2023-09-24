//int pinArray[] = {2, 3, 4, 5, 6, 7};
int pinArray[] = {2, 3, 4, 5, 6, 7, 8, 9};
int count = 0;
int timer = 70;
void setup() {
  //for (count = 0; count < 8; count++) {
    for (count = 0; count < 8; count++) {
pinMode(pinArray[count], OUTPUT);
}
}

void loop() {
  //for (count = 0; count <6 ; count++) {
    for (count = 0; count <8 ; count++) {
  digitalWrite(pinArray[count], HIGH);
delay(timer);
//digitalWrite(pinArray[count + 1], HIGH);
//delay(timer);
digitalWrite(pinArray[count], LOW);
delay(timer*2);
  }
  //for (count = 4; count > 0; count--) {
     for (count = 6; count > 1; count--) {
    digitalWrite(pinArray[count], HIGH);
    delay(timer);
    //digitalWrite(pinArray[count - 1], HIGH);
    //delay(timer);
    digitalWrite(pinArray[count], LOW);
    delay(timer*2);
  }
}
