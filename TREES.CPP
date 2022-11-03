//CODED BY NERD Q11
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(void){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(BLUE);
//setbkcolor(GREEN);
for(int k=0;k<=20;k++)
{
for(int i=0,j=0;i<=500,j<=100;i=i+100,j=j+20)
{
//STARS
if(i==300) j=0;
line(100+i,120-j,110+i,90-j);
line(120+i,120-j,110+i,90-j);
line(95+i,105-j,125+i,105-j);
line(100+i,120-j,125+i,105-j);
line(120+i,120-j,95+i,105-j);
if(k%2==0) setfillstyle(SOLID_FILL,BLACK);
else setfillstyle(SOLID_FILL,WHITE);
floodfill(110+i,95-j,BLUE);
floodfill(110+i,110-j,BLUE);
floodfill(98+i,106-j,BLUE);
floodfill(122+i,106-j,BLUE);
floodfill(103+i,116-j,BLUE);
floodfill(115+i,116-j,BLUE);
}
//TREE
line(330,100,300,140);//UP-DOWN
line(330,100,360,140);
line(310,140,285,180);
line(350,140,375,180);
line(295,180,270,220);
line(365,180,390,220);
line(270,220,390,220);
rectangle(310,260,350,220);
setfillstyle(SOLID_FILL,BROWN);
floodfill(320,250,BLUE);
line(300,140,310,140);//CONNECTING LINES
line(360,140,350,140);
line(285,180,295,180);
line(375,180,365,180);
setfillstyle(SOLID_FILL,GREEN);
floodfill(330,120,BLUE);
delay(100);
}
cleardevice();
getch();
closegraph();
}
