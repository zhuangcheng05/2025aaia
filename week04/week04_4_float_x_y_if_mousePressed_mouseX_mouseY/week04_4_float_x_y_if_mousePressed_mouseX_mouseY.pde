//week04_4_float_x_y_if_mousePressed_mouseX_mouseY
void setup(){
  size(600,400);
}
float x = 300, y = 200;
void draw(){
  background(#C0FFEE);//不是coffee 是 c0ffee
  ellipse (x, y, 18, 18);
  if (mousePressed){
    x = (x + mouseX)/2; //放到中間
    y = (y + mouseY)/2; //放到中間
  }
}
