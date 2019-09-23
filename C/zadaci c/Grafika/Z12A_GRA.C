#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main(){
      int driver,mode,x1,y1,x2,y2,x,y;
      driver=DETECT;
      initgraph(&driver,&mode,"\\tc\\bgi");
      printf("unesi koor tacaka A1, A2: ");
      scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
      for(x=x1;x<=x2;x++){
	setcolor(WHITE);
	y=(int)((float)(y2-y1)/(x2-x1)*(x-x1)+y1);
	circle(x,y,50);
	delay(2500);
	setcolor(BLACK);
	circle(x,y,50);
      }
      getch();
      closegraph();
}



















