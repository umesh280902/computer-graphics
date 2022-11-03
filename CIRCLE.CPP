#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void Circle(int,int,int);
void eightsymmetry(int,int,int,int);
int main()
{     int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int x,y,radius1;
	int radius2;
	printf("enter centre and radius for circle1\n");
	scanf("%d%d%d",&x,&y,&radius1);
	Circle(x,y,radius1);
	printf("enter centre and radius circle2\n");
	scanf("%d",&radius2);
	Circle(x,y,radius2);
	getch();
	return 0;
}
void Circle(int xc,int yc,int radius)
{
	int x,y;
	x=0;
	y=radius;
	int p;
	p=1.25-radius;
	eightsymmetry(xc,yc,x,y);
	while(x<=y)
	{
		if(p<0)
		{
		p=p+2*x+1;
		x=x+1;
		y=y;
		}
		else
		{
			p=p+2*(x-y);
			y=y-1;
			x=x+1;
		}
		eightsymmetry(xc,yc,x,y);
		//eightsymmetry(xc+1,yc,x,y);
		//eightsymmetry(xc,yc+1,x,y);
		//eightsymmetry(xc,yc,x+1,y);
		//eightsymmetry(xc,yc,x,y+1);
	}

}
//void eightsymmetry(int xc,int yc,int x,int y)
//{
//	if(x%5==0)
//	{
//	putpixel(x+xc,y+yc,WHITE);
//	putpixel(x+xc,-y+yc,WHITE);
//	putpixel(-x+xc,-y+yc,WHITE);
//	putpixel(-x+xc,y+yc,WHITE);
//	putpixel(y+xc,x+yc,WHITE);
//	putpixel(y+xc,-x+yc,WHITE);
//	putpixel(-y+xc,-x+yc,WHITE);
//	putpixel(-y+xc,x+yc,WHITE);
//	}
//}
void eightsymmetry(int xc,int yc,int x,int y)
{
	if(x%10!=0)
	{
	putpixel(x+xc,y+yc,WHITE);
	putpixel(x+xc,-y+yc,WHITE);
	putpixel(-x+xc,-y+yc,WHITE);
	putpixel(-x+xc,y+yc,WHITE);
	putpixel(y+xc,x+yc,WHITE);
	putpixel(y+xc,-x+yc,WHITE);
	putpixel(-y+xc,-x+yc,WHITE);
	putpixel(-y+xc,x+yc,WHITE);
	}
}
//void eightsymmetry(int xc,int yc,int x,int y)
//{
//	putpixel(x+xc,y+yc,WHITE);
//	putpixel(x+xc,-y+yc,WHITE);
//	putpixel(-x+xc,-y+yc,WHITE);
//	putpixel(-x+xc,y+yc,WHITE);
//	putpixel(y+xc,x+yc,WHITE);
//	putpixel(y+xc,-x+yc,WHITE);
//	putpixel(-y+xc,-x+yc,WHITE);
//	putpixel(-y+xc,x+yc,WHITE);
//	}
