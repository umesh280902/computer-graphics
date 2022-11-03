#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#define flood(x,y,oc,nc) floodfill(x,y,oc)
void draw(float x[11],float y[11])
{ setcolor(BLUE);
//Front Rectangle
line(320+x[1],240-y[1],320+x[2],240-y[2]);
line(320+x[2],240-y[2],320+x[3],240-y[3]);
line(320+x[3],240-y[3],320+x[4],240-y[4]);
line(320+x[4],240-y[4],320+x[1],240-y[1]);
//left part
line(320+x[1],240-y[1],320+x[6],240-y[6]);
line(320+x[6],240-y[6],320+x[5],240-y[5]);
line(320+x[5],240-y[5],320+x[4],240-y[4]);
//upper part
line(320+x[5],240-y[5],320+x[10],240-y[10]);
line(320+x[10],240-y[10],320+x[9],240-y[9]);
line(320+x[9],240-y[9],320+x[8],240-y[8]);
line(320+x[8],240-y[8],320+x[3],240-y[3]);
//right part
line(320+x[8],240-y[8],320+x[7],240-y[7]);
line(320+x[7],240-y[7],320+x[2],240-y[2]);
}
void rotate(float x[11],float y[11],float angle,float tx,float ty)
{
angle=angle*(3.14/180);
for(int i=1;i<=10;i++)
{
//First translate to origin
int xshift=x[i]-tx;
int yshift=y[i]-ty;
//rotation
x[i]=(xshift*cos(angle))-(yshift*sin(angle));
y[i]=(yshift*cos(angle))+(xshift*sin(angle));
//Translate back
x[i]=x[i]+tx;
y[i]=y[i]+ty;
}
}
void floode(int x,int y,int bc,int nc)
{
if(getpixel(x,y)!=bc){
putpixel(x,y,nc);
floode(x+1,y,bc,nc);
floode(x,y-1,bc,nc);
floode(x-1,y,bc,nc);
floode(x,y+1,bc,nc);
// boundfill(x+1,y+1,bc,nc);
//boundfill(x-1,y+1,bc,nc);
//boundfill(x-1,y-1,bc,nc);
//boundfill(x+1,y-1,bc,nc);
}
return;
}
float x[11],y[11];
int main(void){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI//" );
setfillstyle(SOLID_FILL,YELLOW);
x[1]=x[4]=x[10]=-30;
y[1]=y[2]=0;
y[4]=y[3]=100;
x[5]=x[6]=-50;
y[5]=y[8]=125;
y[6]=y[7]=25;
y[10]=y[9]=150;
x[2]=x[3]=-x[1];
x[7]=x[8]=-x[6];
x[9]=-x[10];
draw(x,y);
setbkcolor(WHITE);
flood(320+0,240-50,BLUE,YELLOW);
flood(320-40,240-100,BLUE,YELLOW);
flood(320+40,240-100,BLUE,YELLOW);
flood(320+0,240-110,BLUE,YELLOW);
delay(2000);
cleardevice();
rotate(x,y,45,0,0);
draw(x,y);
flood(320+0,240-50,BLUE,YELLOW);
flood(320-40,240-50,BLUE,YELLOW);
flood(320-100,240-100,BLUE,YELLOW);
//putpixel(320-100,240-100,BLUE);
flood(320-100,240-40,BLUE,YELLOW);
getch();
closegraph();
}
