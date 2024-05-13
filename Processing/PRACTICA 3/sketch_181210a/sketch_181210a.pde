void setup(){
size(300,300);
background(255);
}
void draw(){}
void mousePressed()
{
stroke(0);
fill(255,0,0);
rect(mouseX,mouseY,16,16);
fill(0,255,0);
rect(mouseX+21,mouseY,16,16);
fill(0,0,255);
ellipse(mouseX+19,mouseY-10,16,16);
}
