void setup() {
 size(400, 400); // tamaño de la pantalla
 stroke(255); // color seleccionado; blanco
 background(#F02CCF);
 }

 void draw() {
 line(150, 25, mouseX, mouseY); // dibuja una línea desde el punto (150,25) al puntero del ratón
 line(10, 10, mouseX, mouseY); // dibuja una línea desde el punto (150,25) al puntero del ratón
 }

 // esta es una función que se ejecuta cuando se produce este evento
 void mousePressed() {
 background(#23F016); // esta función se ejecuta cuando presiona el ratón, botón izquierdo // cuando pulsa, la funcion background (R, G, B)
  stroke(#DDF016); // color seleccionado; blanco
 }
