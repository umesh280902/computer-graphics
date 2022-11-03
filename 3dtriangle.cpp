#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>
float x[6],y[6];
void draw(float x[6],float y[6])
{
line(320+x[1],240-y[1],320+x[4],240-y[4]);
line(320+x[1],240-y[1],320+x[2],240-y[2]);
line(320+x[2],240-y[2],320+x[3],240-y[3]);
line(320+x[3],240-y[3],320+x[4],240-y[4]);
line(320+x[4],240-y[4],320+x[5],240-y[5]);
line(320+x[1],240-y[1],320+x[5],240-y[5]);
line(320+x[5],240-y[5],320+x[3],240-y[3]);
setfillstyle(SOLID_FILL,BLUE);
floodfill(320+((x[1]+x[3])/2),240-((y[2]+y[4])/2),WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(320+((x[1]+x[4])/2),240-((y[1]+y[5])/3),WHITE);
floodfill(320+((x[3]+x[4])/2),240-((y[3]+y[5])/3),WHITE);
}
void rotate(float x[6],float y[6],float angle,float tx,float ty)
{
angle=angle*(3.14/180);
for(int i=1;i<6;i++)
{
//Translate to origin
int xshift=x[i]-tx;
int yshift=y[i]-ty;
//rotate
x[i]=(xshift*cos(angle))-(yshift*sin(angle));
y[i]=(yshift*cos(angle))+(xshift*sin(angle));
//Translate Back
x[i]=x[i]+tx;
y[i]=y[i]+ty;
}
}
void translate(float x[6],float y[6],float tx,float ty)
{
for(int i=1;i<6;i++)
{
x[i]=x[i]+tx;
y[i]=y[i]+ty;
}
}
void scale(float x[6],float y[6],float sx,float sy)
{
for(int i=1;i<6;i++)
{
x[i]=x[i]*sx;
y[i]=y[i]*sy;
}
}
int main(void){
int gd=DETECT,gm;
x[1]=50;
y[1]=y[3]=0;
x[2]=x[4]=x[5]=0;
y[2]=-25;
y[5]=150;
x[3]=-x[1];
y[4]=-y[2];
initgraph(&gd,&gm,"C://TURBOC3//BGI");
draw(x,y);
delay(300);
cleardevice();
rotate(x,y,45,0,0);
draw(x,y);
delay(300);
cleardevice();
translate(x,y,100,0);
draw(x,y);
delay(300);
cleardevice();
scale(x,y,1.5,1.5);
draw(x,y);
delay(300);
getch();
closegraph();
}

