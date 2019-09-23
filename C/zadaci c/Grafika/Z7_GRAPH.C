#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main(){
     int  driver,mode,x,y;
     driver=DETECT;
     initgraph(&driver,&mode,"\\tc\\bgi");
     setcolor(BLUE);
     for(y=10;y<480;y+=10)
	 line(0,y,640,y);
     setcolor(RED);
     for(x=10;x<640;x+=10)
	 line(x,0,x,480);

     getch();
     closegraph();
}