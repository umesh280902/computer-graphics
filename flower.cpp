#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
float x1[3],y1[3],x2[3],y2[3],cx,cy;
void rotate(float x[3],float y[3],float angle,float tx,float ty){
angle=angle*(3.14/180);
for(int i=0;i<3;i++)
{
//for Translation
int xshift=x[i]-tx;
int yshift=y[i]-ty;
//Rotation
x[i]=(xshift*cos(angle))-(yshift*sin(angle));
y[i]=(yshift*cos(angle))+(xshift*sin(angle));
//Translate Back
x[i]=x[i]+tx;
y[i]=y[i]+ty;
}
}
void bcurve(float x[3],float y[3])
{
float bx,by;
for(float t=0;t<=1;t=t+0.001)
{
bx=x[0]*(1-t)*(1-t)+x[1]*2*(1-t)*t+x[2]*t*t;
by=y[0]*(1-t)*(1-t)+y[1]*2*(1-t)*t+y[2]*t*t;
putpixel(320+bx,240-by,BLUE);
}
}
int main(void){
int gd=DETECT,gm;
x1[0]=x2[0]=0;
y1[0]=y2[0]=0;
x1[2]=x2[2]=0;
y1[2]=y2[2]=100;
x1[1]=-15;
x2[1]=15;
y1[1]=y2[1]=50;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(LIGHTMAGENTA);
setfillstyle(SOLID_FILL,WHITE);
for(int i=0;i<20;i++)
{
bcurve(x1,y1);
rotate(x1,y1,18,0,0);
bcurve(x2,y2);
rotate(x2,y2,18,0,0);
}
floodfill(320-200,240-200,BLUE);
setcolor(RED);
circle(320,240,30);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(320,240,RED);
getch();
closegraph();
}

