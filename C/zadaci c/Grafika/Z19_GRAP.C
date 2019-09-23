#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
      main(){
      int driver,mode;
      int x,y,x1,x2,y1,y2,i,j,a,b;
      driver=DETECT;
      initgraph(&driver,&mode,"\\tc\\bgi");
      setcolor(YELLOW);
      for(y=48;y<480;y+=48)
      line(0,y,640,y);
      setcolor(GREEN);
      for(x=64;x<640;x+=64)
      line(x,0,x,480);
      scanf("%d%d%",&a,&b);
      for(i=64*a;i<64*a+64;i++)
	for(j=48*b;j<48*b+48;j++)
	putpixel(i,j,RED);
      getch();
      closegraph();
      }
