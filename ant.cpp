#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<dos.h> 
int main(void) 
{ 
 int gd=DETECT,gm,i; 
 initgraph(&gd,&gm,"C://TURBOC3//BGI"); 
 for(i=0;i<=100;i++) 
 { 
 cleardevice(); 
 ellipse(200+i,200,0,360,60,40); 
 //eye 
 ellipse(230+i,185,0,360,3,6); 
 setfillstyle(SOLID_FILL,WHITE); 
 floodfill(232+i,187,15); 
 ellipse(230+i,215,0,360,3,6); 
 setfillstyle(SOLID_FILL,WHITE); 
 floodfill(232+i,213,15); 
 //head 
 line(260+i,200,300+i,180); 
 line(260+i,200,300+i,220); 
 //leg 
 line(200+i,240,240+i,270); 
 line(200+i,240,170+i,260); 
 //tail 
 line(141+i,195,100+i,175); 
 line(141+i,205,110+i,215); 
 delay(100); 
 } 
 getch(); 
 closegraph(); 
} 

