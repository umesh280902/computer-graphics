#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

int main(void)
{
int x1,y1,x2,y2,dx,dy,step,i=0,m=0;
float incx,incy;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C://TURBOC3//BGI");
printf("Enter start coordinates: ");
scanf("%d %d",&x1,&y1);
printf("Enter end coordinates: ");
scanf("%d %d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(dx>dy)
{
step=dx;
}
else
{
step=dy;
}
incx=dx/step;
incy=dy/step;
putpixel(x1,y1+1,15);
putpixel(x1,y1-1,15);
putpixel(x1-1,y1,15);
putpixel(x1+1,y1,15);
putpixel(x1,y1,15);
i=1;
while(i<=step)
{
if(m<1)
{
x1=x1+incx;
y1=y1+incy;
m=m+1;
}
else
{
x1=x1+incx;
y1=y1+incy;
putpixel(x1-1,y1,15);
putpixel(x1+1,y1,15);
putpixel(x1,y1,15);
putpixel(x1,y1+1,15);
putpixel(x1,y1-1,15);
m=0;
}
i=i+1;
}
getch();
closegraph();
return 0;
}
