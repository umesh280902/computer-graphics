#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	int i= 0,j=0,rnd_x=0,rnd_y,stop_me=0;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    while(stop_me<=1000)
    {
    if(i>=180 &&j>=100 ) // controlling kite, so that it wouldn't disappear from screen
    {
    rnd_x=rand()%4 -3;
    rnd_y=rand()%5 -4;
    }
    else{
    rnd_x=rand()%3;
    rnd_y=rand()%3;
    }
	line(270+i,240-j,320+i,170-j);
	line(370+i,240-j,320+i,170-j);
	line(320+i,170-j,320+i,310-j);
	line(270+i,240-j,370+i,240-j);
	line(270+i,240-j,320+i,310-j);
	line(370+i,240-j,320+i,310-j);
	ellipse(312+i,240-j,280,0,8,40);
	ellipse(312+i,318-j,90,160,8,40);
	i=i+rnd_x;
    j=j+rnd_y;
    stop_me=5+stop_me;
    delay(50);
    cleardevice();
    }
	getch();
	closegraph();
	return 0;
}
