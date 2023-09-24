int i;
void setup(){
for(i=9;i<12;i++)
pinMode(i,OUTPUT);
}
 void setColor(int R, int G, int B){
    analogWrite(11,R);
    analogWrite(9,G);
    analogWrite(10,B);
    }

void loop(){
 setColor(255,0,0);
 delay(500);
 setColor(0,255,0);
 delay(500);
 setColor(255,128,0);
 delay(500);
 setColor(0,0,255);
 delay(500);
 setColor(255,255,0);
 delay(500);
 setColor(255,255,255);
 delay(500);
 setColor(255,0,255);
 delay(500);
 setColor(128,64,64);
 delay(500);
  setColor(128,0,128);
 delay(1000);
  }