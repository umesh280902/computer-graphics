#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void bcurve(int x[4][4],int y[4][4]){
float bx,by;
for(int i=0;i<4;i++)
{
for(float t=0;t<=1;t=t+0.001)
{
bx=x[i][0]*(1-t)*(1-t)*(1-t)+x[i][1]*3*(1-t)*(1-t)*t+x[i][2]*3*(1-
t)*t*t+x[i][3]*t*t*t;
by=y[i][0]*(1-t)*(1-t)*(1-t)+y[i][1]*3*(1-t)*(1-t)*t+y[i][2]*3*(1-
t)*t*t+y[i][3]*t*t*t;
putpixel(bx,by,BLUE);
}
}
}
int main(void){
int gd=DETECT,gm;
int x[4][4],y[4][4];
initgraph(&gd,&gm,"C://TURBOC3//BGI");
setlinestyle(SOLID_LINE,0,3);
setbkcolor(WHITE);
getch();
for(int i=0;i<10;i++)
{
//set
line(320-100,240-100,320-100,240+200);
x[0][0]=x[1][0]=x[2][0]=x[3][0]=320-100;
y[0][0]=240-100;
y[1][0]=240-50;
y[2][0]=240;
y[3][0]=240+50;
x[0][3]=x[1][3]=x[2][3]=x[3][3]=320+100;
y[0][3]=240-100;
y[1][3]=240-50;
y[2][3]=240;
y[3][3]=240+50;
x[0][1]=x[1][1]=x[2][1]=x[3][1]=320-33;
y[0][1]=240-115;
y[1][1]=240-65;
y[2][1]=240-15;
y[3][1]=240+35;
x[0][2]=x[1][2]=x[2][2]=x[3][2]=320+33;
y[0][2]=240-80;
y[1][2]=240-30;
y[2][2]=240+20;
y[3][2]=240+70;
bcurve(x,y);
line(x[0][3],y[0][3],x[3][3],y[3][3]);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BROWN);
floodfill(320-0,240-75,BLUE);
setfillstyle(SOLID_FILL,GREEN);
floodfill(320-0,240+25,BLUE);
circle(320+0,240-25,16);
line(320-16,240-25,320+16,240-25);
line(320,240-40,320,240-10);
line(320-10,240-35,320,240-25);
line(320+10,240-35,320,240-25);
line(320-12,240-10,320,240-25);
line(320+12,240-10,320,240-25);
delay(500);
cleardevice();
//reset
line(320-100,240-100,320-100,240+200);
for(int i=0;i<4;i++)
{
int tempx=x[i][1];
int tempy=y[i][1];
x[i][1]=x[i][2];
y[i][1]=y[i][2];
x[i][2]=tempx;
y[i][2]=tempy;
}
bcurve(x,y);
line(x[0][3],y[0][3],x[3][3],y[3][3]);
setfillstyle(SOLID_FILL,BROWN);
floodfill(320-0,240-75,BLUE);
setfillstyle(SOLID_FILL,GREEN);
floodfill(320-0,240+25,BLUE);
setcolor(BLUE);
circle(320+0,240-25,16);
line(320-16,240-25,320+16,240-25);
line(320,240-40,320,240-10);
line(320-10,240-35,320,240-25);
line(320+10,240-35,320,240-25);
line(320-12,240-10,320,240-25);
line(320+12,240-10,320,240-25);
delay(500);
cleardevice();
}
closegraph();
}
