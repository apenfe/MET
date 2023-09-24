const int Trigger=2;
const int Echo=3;
int i;
int pinzumbador = 8;
int frecuencia = 220;

void setup() {
  Serial.begin(9600);
  pinMode(Trigger,OUTPUT);
  pinMode(Echo,INPUT);
  digitalWrite(Trigger,LOW);
  for(i=9;i<12;i++)
pinMode(i,OUTPUT);
}
void setColor(int R, int G, int B){
analogWrite(11,R);
analogWrite(9,G);
analogWrite(10,B);
}



void loop() {
  long t;
  long d;

  digitalWrite(Trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger,LOW);
  t=pulseIn(Echo,HIGH);
  d=t/59;

  if(d>=10){
    setColor(48,132,70);//verde
    delay(50);
     Serial.print(d);
    }
    else if(d<10&&d>5){
      setColor(255,255,0);//amarillo
       Serial.print(d);
      delay(50);
      }
      else{
         setColor(255,0,0);//rojo
         tone(pinzumbador,frecuencia);
          Serial.print("CUIDADO");
         delay(50);
        }
}
