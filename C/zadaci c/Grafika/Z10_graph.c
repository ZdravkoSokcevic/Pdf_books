#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
    int driver,mode;
    int x1,y1,x2,y2,i;
    driver=DETECT;
    initgraph(&driver,&mode,"\\tc\\bgi");

	for(i=5;i<200;i++){
		setcolor(YELLOW);
		circle(320,240,i);
		delay(2500);
		setcolor(BLACK);
		circle(320,240,i);
	}
	setcolor(YELLOW);
	circle(320,240,i);

	getch();
	closegraph();
}