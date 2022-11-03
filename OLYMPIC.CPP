#include<stdio.h>
#include<graphics.h>
void display(int x,int y,int xc,int yc)
{
putpixel(320+(xc+x),240-(yc+y),WHITE);
putpixel(320+(xc+x),240-(yc-y),WHITE);
putpixel(320+(xc-x),240-(yc-y),WHITE);
putpixel(320+(xc-x),240-(yc+y),WHITE);
putpixel(320+(xc+y),240-(yc+x),WHITE);
putpixel(320+(xc+y),240-(yc-x),WHITE);
putpixel(320+(xc-y),240-(yc-x),WHITE);
putpixel(320+(xc-y),240-(yc+x),WHITE);
}
void circle(int xc,int yc,int r)
{
int x,y,d;
x=0;
y=r;
d=1.25-r;
do{
display(x,y,xc,yc);
if(d<0)
{
x=x+1;
y=y;
d=d+(2*x)+1;
}
else
{
x=x+1;
y=y-1;
d=d+(2*(x-y))+1;
}
}while(x<y);

}
int main(void)
{
 // Initialize graphic driver
 int gdriver = DETECT, gmode, err;
 int i = 0;
 initgraph(&gdriver, &gmode, "\\BGI");
circle(200,200,30);
circle(200,200,25);
 setfillstyle(1,BLUE);
 floodfill(172,200,WHITE);
 circle(320,200,30);
circle(320,200,25);
setfillstyle(1,RED);
floodfill(348,200,WHITE);
circle(230,230,30);
circle(230,230,25);
setfillstyle(1,YELLOW);
floodfill(201,230,WHITE);
circle(260,200,30);
circle(260,200,25);
circle(290,230,30);
circle(290,230,25);
setfillstyle(1,GREEN);
floodfill(262,230,WHITE);
floodfill(264,220,WHITE);
setbkcolor(WHITE);
 getch();
 closegraph();

}

