/* =======================================================================================
         Proyecto: MT8870 
          Autor: ADRIÁN PEÑALVER
         Creado: 18/12/2015
     Arduino IDE: 1.8.7
                                                    STQ  Q1 Q2 Q3 Q4
     PIN STQ ------> PIN 3              172,9 (Hz)  (1   1  1  1  0 )
     PIN Q4  ------> PIN 4              260   (Hz)  (1   1  0  1  0 )
     PIN Q3  ------> PIN 5              290   (Hz)  (1   1  0  0  1 )
     PIN Q2  ------> PIN 6              320   (Hz)  (1   0  0  0  0 )
     PIN Q1  ------> PIN 7              435   (Hz)  (1   0  0  0  1 )
      GNG ------> GND                   751   (Hz)  (1   0  1  1  0 )
       VCC ------> 5V                   793   (Hz)  (1   0  1  1  1 )
                                        828   (Hz)  (1   1  1  1  1 )
=========================================================================================== */
 const int PORTADORA = 3;        
 const int bit_4 = 4;        
 const int bit_3 = 5;        
 const int bit_2 = 6;        
 const int bit_1 = 7;        

void setup() {
  
  pinMode(PORTADORA, INPUT);
  pinMode(bit_4, INPUT);
  pinMode(bit_3, INPUT);
  pinMode(bit_2, INPUT);
  pinMode(bit_1, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(PORTADORA)==HIGH){       
    Serial.print("PORTADORA ");
    Serial.print(digitalRead(PORTADORA));
    if(digitalRead(bit_1)==HIGH){      
      Serial.print(digitalRead(bit_1));
      Serial.print("bit_1 ");}
    if(digitalRead(bit_2)==HIGH){     
      Serial.print(digitalRead(bit_2));
      Serial.print("bit_2 ");}
    if(digitalRead(bit_3)==HIGH){      
      Serial.print(digitalRead(bit_3));
      Serial.print("bit_3 ");}
    if(digitalRead(bit_4)==HIGH){      
      Serial.print(digitalRead(bit_4));
      Serial.print("bit_4 ");}
  }
  Serial.println(" ");
}
