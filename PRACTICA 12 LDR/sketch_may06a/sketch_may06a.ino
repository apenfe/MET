const int LEDpin13= 13;
const int LEDpin12= 12;
const int LEDpin11= 11;
const int LEDpin10= 10;
const int LDRpin= A0;

void setup() {
  pinMode(LEDpin13,OUTPUT);
  pinMode(LEDpin12,OUTPUT);
  pinMode(LEDpin11,OUTPUT);
  pinMode(LEDpin10,OUTPUT);
  pinMode(LDRpin,INPUT);
}

void loop() {
  int luminosidad= analogRead(LDRpin); //0 y 1023
  if (luminosidad > 816){
    digitalWrite(LEDpin13,HIGH);
    digitalWrite(LEDpin12,HIGH);
    digitalWrite(LEDpin11,HIGH);
    digitalWrite(LEDpin10,HIGH);
    }
  else if (luminosidad > 612){
    digitalWrite(LEDpin13,LOW);
    digitalWrite(LEDpin12,HIGH);
    digitalWrite(LEDpin11,HIGH);
    digitalWrite(LEDpin10,HIGH);
    }
  else if (luminosidad > 408){
    digitalWrite(LEDpin13,LOW);
    digitalWrite(LEDpin12,LOW);
    digitalWrite(LEDpin11,HIGH);
    digitalWrite(LEDpin10,HIGH);
    }
  else if (luminosidad > 204){
    digitalWrite(LEDpin13,LOW);
    digitalWrite(LEDpin12,LOW);
    digitalWrite(LEDpin11,LOW);
    digitalWrite(LEDpin10,HIGH);
  }
  else{
    digitalWrite(LEDpin13,LOW);
    digitalWrite(LEDpin12,LOW);
    digitalWrite(LEDpin11,LOW);
    digitalWrite(LEDpin10,LOW);
   }
}
