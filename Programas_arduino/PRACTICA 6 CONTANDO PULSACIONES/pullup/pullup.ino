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
 setColor(random(255),random(255),random(255));
 delay(500);
  }
