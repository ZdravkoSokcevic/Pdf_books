#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
void crtaj(int,int,int,int,int,int,int,int);
main(){
	int driver,mode;
	int x1,y1,x2,y2,x3,y3,x4,y4,i,xp1,yp1,xp2,yp2,xp3,yp3,xp4,yp4;
	driver=DETECT;
	initgraph(&driver,&mode,"\\tc\\bgi");
	randomize();
	x2=random(640); y1=random(480);
	x3=random(640); y2=random(480);
	x1=random(640); y3=random(480);
	x4=random(640); y4=random(480);
	getch();
	xp1=yp1=xp2=yp2=xp3=yp3=xp4=yp4=1;
	for(;;){
		setcolor(WHITE);
		crtaj(x1,y1,x2,y2,x3,y3,x4,y4);
		delay(1500);
		setcolor(BLACK);
		crtaj(x1,y1,x2,y2,x3,y3,x4,y4);
		if(x1>=640 || x1 <=0)xp1*=-1;
		if(y1>=480 || y1<=0)yp1*=-1;
		if(x2>=640 || x2<=0)xp2*=-1;
		if(y2>=480 || y2<=0)yp2*=-1;
		if(x3>=640 || x3<=0)xp3*=-1;
		if(y3>=480 || y3<=0)yp3*=-1;
		if(x4>=640 || x4<=0)xp4*=-1;
		if(y4<=480 || y4<=0)yp4*=-1;
		x1+=xp1;
		y1+=yp1;
		x2+=xp2;
		y2+=yp2;
		x3+=xp3;
		y3+=yp3;
		x4+=xp4;
		y4+=yp4;
		if(kbhit()) break;
		}
		getch();

/*	for(i=640;i>0;i--){
		setcolor(WHITE);
		crtaj(i,y1,x2,y2,x3,y3,x4,y4);
		delay(800);
		setcolor(BLACK);
		crtaj(i,y1,x2,y2,x3,y3,x4,y4);
		}
	for(i=0;i<=x1;i++){
		setcolor(WHITE);
		crtaj(i,y1,x2,y2,x3,y3,x4,y4);
		delay(1000);
		setcolor(BLACK);
		crtaj(i,y1,x2,y2,x3,y3,x4,y4);
		}
	setcolor(WHITE);
	crtaj(i,y1,x2,y2,x3,y3,x4,y4);
	getch();
*/
	closegraph();
	}
void crtaj(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
	}

