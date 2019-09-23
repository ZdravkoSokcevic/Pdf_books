#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	int driver,mode;
	int x1,y1,x2,y2,i;
	driver=DETECT;
	initgraph(&driver,&mode,"\\tc\\bgi");
	rectangle(100,100,500,400);
	setcolor(YELLOW);
	for(i=104;i<=400;i+=4)
	line(i,100,100,i);
	setcolor(RED);
	for(i=404;i<=500;i+=4)
	line(i,100,i-300,400);
	setcolor(BLUE);
	for(i=204;i<=500;i+=4)
	line(500,i-100,i,400);
	getch();
	closegraph();
}
