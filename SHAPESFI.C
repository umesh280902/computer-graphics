#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define MAX 10000
typedef struct node{
	int x;
	int y;
}Node;
Node stack[MAX];
int top = -1;

void push(int x, int y){
	top++;
	stack[top].x = x;
	stack[top].y = y;
}
Node pop(){
	Node p;
	p.x = stack[top].x;
	p.y = stack[top].y;
	top--;
	return p;
}

void boundaryFill4(int seedx, int seedy, int fill_color,int boundary_color)
{
    Node pxel;
	int x, y, color;
	push(seedx, seedy);
	while(top != -1){
		pxel = pop();
		color = getpixel(pxel.x, pxel.y);
		if(color!=fill_color) putpixel(pxel.x, pxel.y, fill_color);
		x = pxel.x;
		y = pxel.y;
		color = getpixel(x+1, y);
		if(color!=fill_color && color!=boundary_color) push(x+1, y);
		color = getpixel(x, y+1);
		if(color!=fill_color && color!=boundary_color) push(x, y+1);
		color = getpixel(x-1, y);
		if(color!=fill_color && color!=boundary_color) push(x-1, y);
		color = getpixel(x, y-1);
		if(color!=fill_color && color!=boundary_color) push(x, y-1);
	}
}

int main(void){
	int gd=DETECT, gm;
	int arr[] = {100, 120, 200, 120, 180, 150, 120, 150, 100, 120};
	initgraph(&gd, &gm, "\\BGI");
	drawpoly(5, arr);
	rectangle(300, 100, 370, 250);
	ellipse(335, 70, 0, 360, 70, 30);
	boundaryFill4(110, 127, 1, 15);
	boundaryFill4(305, 105, 4, 15);
	boundaryFill4(335, 70, 2, 15);
	getch();
	closegraph();
}
