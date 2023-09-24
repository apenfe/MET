int verde=5;
int amarillo=4;
int rojo=3;
void setup(){
  pinMode(verde,OUTPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(rojo,OUTPUT);
  Serial.begin(9600);
  }
void loop(){
 Serial.println("Semaforo - Inicio");
 digitalWrite(verde,HIGH);
 Serial.println("Semaforo - VERDE");
 delay(3000);
 digitalWrite(verde,LOW);
 digitalWrite(amarillo,HIGH);
 Serial.println("Semaforo - AMARILLO");
 delay(1000);
 digitalWrite(amarillo,LOW);
 digitalWrite(rojo,HIGH);
 Serial.println("Semaforo - ROJO");
 delay(2000);
 digitalWrite(rojo,LOW);
}
