const int pinon=2;
const int pinoff=3;
const int pinled=13;
int estaon=HIGH;
int estaoff=HIGH;

void setup(){
  pinMode(pinon,INPUT);
  pinMode(pinoff,INPUT);
  pinMode(pinled,OUTPUT);
  }

  void loop(){
    estaon=digitalRead(pinon);
    estaoff=digitalRead(pinoff);
if(estaon==LOW){
  digitalWrite(pinled,HIGH);
  }
  if(estaoff==LOW){
  digitalWrite(pinled,LOW);
  }
    
    }
