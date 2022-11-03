#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main(void)
{
	//initilizing graphic driver and 
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;

	//calling initgraph
	initgraph(&graphicdriver,&graphicmode,"c:\\tc\\bgi");

	//Printing message for user
//	outtextxy(10, 10 + 10, "Program to draw cubes of diffrent sizes in C graphics");

	//creating both the cubes using bar3d function.
    setfillstyle(SOLID_FILL, GREEN);
	bar3d(200, 200, 300, 300, 20, 1);
	delay(100);
	setfillstyle(SOLID_FILL, RED);
	floodfill(240, 190, WHITE);
	delay(100);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(310, 280, WHITE);
     delay(100);
	getch();
	return 0;
}

