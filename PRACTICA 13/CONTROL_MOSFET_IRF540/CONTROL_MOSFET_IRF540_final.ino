#define PIN_MOTOR 9
#define PIN_SENTIDO 8
#define PIN_ONOFF   7
                                     // Declaracion de variables enteras.  
int sentidoGiro;
int i = 0;
int valor;

void setup()
  {
    pinMode(PIN_MOTOR,OUTPUT);                              // Declara el pin 9 de Arduino como SALIDA 
    pinMode(PIN_SENTIDO,OUTPUT); 
    
    Serial.begin (9600);                            // Establece la velocidad de datos en bit por segundo (baudios) para la transmisión de datos en serie.
  }

void loop()
  {
    while(digitalRead(PIN_ONOFF) == HIGH)                     // Mientras el pin 7 esté en estado ALTO, ejecuta las sentencias que hay dentro de las llaves.  (ON/OFF)
      {
           for (i=0; i < 160; i+=1)                 // RAMPA DE ACELERACIÓN   160 antes 254
                    {  
                      analogWrite(PIN_MOTOR, i);    // Escribe el valor de la varible i en el pin analógico 9 (motor). 
                      Serial.println(i);            // Imprime los datos en el puerto serie, seguido de un retorno de carro y de línea nueva. 
                      delay(70);                    // Hace una pausa en el programa durante el tiempo (50 milisegundos), bloqueando todo el programa durante dicho tiempo.
                    }
                     delay (2000);
              
     
           for (i=159; i > 1; i-=1)                 // RAMPA DE DECELERACIÓN  antes 255 ahora 159
                    {
                     analogWrite(PIN_MOTOR,i);      // Escribe el valor de la varible i en el pin analógico 9 (motor). 
                     Serial.println(i);             // Imprime los datos en el puerto serie, seguido de un retorno de carro y de línea nueva. 
                     delay(70);                    // Hace una pausa en el programa durante el tiempo (50 milisegundos), bloqueando todo el programa durante dicho tiempo.
                    }
                     analogWrite(PIN_MOTOR,0);  
                     delay(4000);     

                       if(sentidoGiro == 0){
                  sentidoGiro = 1;
                  digitalWrite(PIN_SENTIDO, HIGH);
                }else{
                   sentidoGiro = 0;
                  digitalWrite(PIN_SENTIDO, LOW);
                
                }
                        
      }
  }       
