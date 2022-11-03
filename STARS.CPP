#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(void){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
for(int k=0;k<=20;k++)
{
int j=20;
for(int i=-50;i<=500;i=i+100)
{
//STARS
if(j==10) j=-10;
else j=10;
line(100+i,120-j,110+i,90-j);
line(120+i,120-j,110+i,90-j);
line(95+i,105-j,125+i,105-j);
line(100+i,120-j,125+i,105-j);
line(120+i,120-j,95+i,105-j);
if(k%2==0) setfillstyle(SOLID_FILL,BLACK);
else setfillstyle(SOLID_FILL,YELLOW);
floodfill(110+i,95-j,WHITE);
floodfill(110+i,110-j,WHITE);
floodfill(98+i,106-j,WHITE);
floodfill(122+i,106-j,WHITE);
floodfill(103+i,116-j,WHITE);
floodfill(115+i,116-j,WHITE);
}
//MOUNTAINS
setcolor(WHITE);
line(0,240,100,140);
line(200,240,100,140);
line(200,240,300,140);
line(400,240,300,140);
line(400,240,500,140);
line(600,240,500,140);
line(0,240,600,240);
delay(100);
}
cleardevice();
getch();
closegraph();
}

