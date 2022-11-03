#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void bresenham(int, int, int, int);
int main()
{
 int gd = DETECT, gm;
 int x1, x2, y1, y2;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 printf("Enter start coordinates\n");
 scanf("%d %d",&x1,&y1);
 printf("Enter end coordinates\n");
 scanf("%d %d",&x2,&y2);
 bresenham(x1, y1, x2, y2);
 getch();
 line(x1, y1, x2, y2);
 closegraph();
 return 0;
}
void bresenham(int x1, int y1, int x2, int y2)
{
 int j, dx, dy, x, y, p, s1, s2, m, swap=0;
 x = x1;
 y = y1;
dx = abs(x2 - x1);
dy = abs(y2 - y1);
 if((x2-x1) < 0)
  s1 = -1;
 else if((x2-x1) > 0)
  s1 = 1;
 else
  s1 = 0;
 if((y2-y1) < 0)
  s2 = -1;
 else if((y2-y1) > 0)
  s2 = 1;
 else
  s2 = 0;
 p = (2 * dy) - dx;
 if(dy > dx)
 {
  m = dy;
  dy = dx;
  dx = m;
  swap = 1;
 }
 putpixel(x, y, WHITE);
 for(j = 1;j <= dx;j++)
 {
  if(p < 0)
  {
   if(swap == 1)
    y = y + s2;
   else
    x = x + s1;
    
   putpixel(x ,y ,WHITE);
    putpixel(x+1 ,y ,WHITE);
     putpixel(x-1 ,y ,WHITE);
      putpixel(x ,y+1 ,WHITE);
       putpixel(x ,y-1 ,WHITE);
   p = p + 2 * dy;
  }
  else
  {
   y = y + s2;
   x = x + s1;
    putpixel(x ,y ,WHITE);
    putpixel(x+1 ,y ,WHITE);
     putpixel(x-1 ,y ,WHITE);
      putpixel(x ,y+1 ,WHITE);
       putpixel(x ,y-1 ,WHITE);
   p = p + 2 * dy - 2 * dx;
  }
 }
}
