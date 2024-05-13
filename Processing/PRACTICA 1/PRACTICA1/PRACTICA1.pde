void setup() {
size(300, 200); // esta función crea una ventana de 300x200 pixeles 
} 

// Este bloque, función, se ejecuta permanentemente hasta que termine el programa 
void draw() { 
// mousePressed captura el evento del ratón, y cambia el color 
if (mousePressed) { // if es un condicional. Si se cumple, ejecuta fill(0) 
fill(0,0,255,100);
// fill -> rellena con 0,0,255,.AZUL con transparencia
} else { //si no se cumple, ejecuta fill(255) 
fill(255,0,0,100); // 255,0,0 es todo color, ROJO pero con cierta transparencia
} 
ellipse(mouseX, mouseY, 80, 80); // dibuja elobjeto elipse

}// fin de programa
