#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"\\BGI");
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(320,240,0,360,200,180);
	floodfill(322,241,BLUE);
	setcolor(BROWN);
	setfillstyle(SOLID_FILL,BLACK);
	ellipse(240,180,0,360,35,40);
	floodfill(242,182,BROWN);
	setcolor(BROWN);
	setfillstyle(SOLID_FILL,BLACK);
	ellipse(400,180,0,360,35,40);
	floodfill(402,182,BROWN);
	for(int i=0;i<50;i++)
	{
		setcolor(RED);
		ellipse(320,270,180,360,75,40+i);
		delay(100);
	}
	for(int i=0;i<=120;i++)
	{
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL,BLACK);
		ellipse(240,100,180,360,35,40+i);
		delay(100);
//		setcolor(BLACK);
//		ellipse(240,180,180,360,35,40+i);
//		delay(1000);
	}
	getch();
	closegraph();
	return 0;
}
