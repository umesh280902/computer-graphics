#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
int main(void)
{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
for(int i=0;i<500;i=i+5)
{
//FACE
circle(50+i,100,50);
circle(25+i,75,8);
circle(75+i,75,8);
line(50+i,90,50+i,110);
ellipse(50+i,120,180,360,16,10);
line(50+i,150,50+i,250);
//HANDS
for(int j=0;j<40;j++)
{
line(50+i,155+j,10+i,160+j);
line(50+i,155+j,90+i,160+j);
}
line(50+i,175,10+i,255);
line(50+i,175,90+i,255);
//LEGS
if(i%10==0)
{
line(50+i,250,50+i,350);
}
else {
line(50+i,250,0+i,350);
line(50+i,250,100+i,350);
}
line(0,350,640,350);
//x=getmaxx();
//y=getmaxy();
//for(int k=0;k<100;k++)
//{
//outtextxy(rand(x),rand(y),".");
//}
delay(200);
cleardevice();
}
getch();
closegraph();
}

