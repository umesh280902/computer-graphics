#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#define max 4000
int stack[max];
int top=-1;
void push(int x)
{
top=top+1;
stack[top]=x;
}
int pop()
{ int value;
value=stack[top];
top=top-1;
return value;
}
void boundaryFill8(int ax,int by,int newcolour,int edgecolour)
{
int y,x;
    push(ax);
      push(by);
      while(top!=-1)
{  y=pop();
x=pop();
	if(getpixel(x,y)!=newcolour)
	{
	putpixel(x,y,newcolour);
	}
	if((getpixel(x+1,y)!=newcolour)&&(getpixel(x+1,y)!=edgecolour))
	{push(x+1);
	push(y);}
	else if((getpixel(x,y+1)!=newcolour)&&(getpixel(x,y+1)!=edgecolour))
       {	push(x);
	push(y+1);}
	else if((getpixel(x-1,y)!=newcolour)&&(getpixel(x-1,y)!=edgecolour))
	{push(x-1);
	push(y);
	}
	else if((getpixel(x,y-1)!=newcolour)&&(getpixel(x,y-1)!=edgecolour))
	{
	push(x);
	push(y-1);
       }
      
}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	ellipse(320,240,0,360,40,20);
	boundaryFill8(325,245,9,15);
	getch();
	return 0;
}
