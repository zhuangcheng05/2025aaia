//week06_4b_array_x_y_int_N_for_mousePressed
void setup(){
  size(600,400);
}
float []x=new float[100];//有100個x和100個y
float []y=new float[100];//java的陣列宣告
int n = 0;//飼料有n個
void draw(){
  background(#C0FFEE);//不是coffee 是 c0ffee
  for(int i=0;i<n;i++){
    ellipse (x[i], y[i], 8, 8);
    y[i] += 2;
    if(y[i]>400){//飼料掉到外面看不到
      for(int k=i;k<n-1;k++){//要回收
        x[k]=x[k+1];
        y[k]=y[k+1];
    }
    n--;//回收完1顆飼料
   }
   println(n);//把n在小黑印出來
 }
}
void mousePressed(){
  x[n] = mouseX;
  y[n] = mouseY;
  n++;//增加1顆飼料
}
