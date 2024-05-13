long valor;

int LED_1=2;
int LED_2=3;
int LED_3=4;
int LED_4=5;
int LED_5=6;

void setup(){
 Serial.begin(9600);
}

void loop(){
 valor= analogRead(A0);
 Serial.print("el valor es= ");
  Serial.println(valor);

  if(valor>= 0 && valor <= 204){
    digitalWrite(LED_1,HIGH);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,LOW);
    }

    if(valor>= 205 && valor <= 409){
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,HIGH);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,LOW);
    }

     if(valor>= 410 && valor <= 614){
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,HIGH);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,LOW);
    }

     if(valor>= 615 && valor <= 819){
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,HIGH);
    digitalWrite(LED_5,LOW);
    }

      if(valor>= 820 && valor <= 1023){
    digitalWrite(LED_1,LOW);
    digitalWrite(LED_2,LOW);
    digitalWrite(LED_3,LOW);
    digitalWrite(LED_4,LOW);
    digitalWrite(LED_5,HIGH);
    }
  }
 