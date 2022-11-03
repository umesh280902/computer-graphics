#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gd=DETECT,gm,i,j;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	floodfill(2,2,WHITE);
	for(i=0;i<getmaxx();i++)
	{
		   setcolor(BLACK);
	     line(200+i,300,150+i,399);
	      line(0+i,300,50+i,399);
	      line(0+i,300,200+i,300);
	      line(70+i,300,70+i,200);
	      line(70+i,200,50+i,300);
	      line(50+i,399,150+i,399);
		 delay(10);
		if(i%5==0)
		{
		setcolor(BLACK);
	    line(6+i*5,400,14+i*5,400);
		setcolor(BLACK);

	   }
		if(i%8==0)
		{
		setcolor(BLACK);
	    line(4+i*5,400,18+i*5,400);
		setcolor(BLACK);

	   }
		if(i%9==0)
		{
		setcolor(BLACK);
	    line(0+i*5,420,25+i*5,420);
		setcolor(BLACK);

	   }
	   if(i%6==0)
		{
		setcolor(BLACK);
	    line(10+i*5,440,25+i*5,440);
		setcolor(BLACK);

	   }
	   if(i%7==0)
		{
		setcolor(BLACK);
	    line(10+i*5,460,25+i*5,460);

		setcolor(BLACK);

	   }
	   clrscr();
	   }

	getch();
	closegraph();
	return 0;
}
