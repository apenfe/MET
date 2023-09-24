void setup() {
  int i;
  //for (i=2;i<8;++i) { 
    for (i=2;i<10;++i) { 
pinMode( i, OUTPUT) ;
  }
}

void loop() {
  int i;
 //for (i=2;i<8;++i) {
  for (i=2;i<10;++i) {
digitalWrite( i , HIGH) ;
delay (500) ;
digitalWrite( i , LOW);
delay (500) ;
}
}
