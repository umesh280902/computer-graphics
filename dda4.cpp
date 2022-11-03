#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void LineDDA(int x0,int y0,int x1,int y1)
{  int dx,dy,steps;
   dx=x1-x0,dy=y1-y0;
   if(abs(dx)>abs(dy))
      steps=abs(dx);
   else
      steps=abs(dy);
   double xinc=double(dx)/double(steps);
   double yinc=double(dy)/double(steps);
   float X=x0;
   float Y=y0;
   putpixel ((X),(Y),(RED) );
   for(int i=0;i<steps;i++){
   X+=xinc;
   Y+=yinc;
   if(i%5==0)
   putpixel ((X),(Y),YELLOW);
   
   }
}
int main()
{ int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\Program Files (x86)\Dev-Cpp\MinGW64\BGI");
  int x0,y0,x1,y1;
  printf("welcome to c");
  printf("Enter x0,y0\n");
  scanf("%d%d",&x0,&y0);
  printf("Enter x1,y1\n");
  scanf("%d%d",&x1,&y1);
  LineDDA(x0,y0,x1,y1);
  getch();
  closegraph();
   return 0;
  }
