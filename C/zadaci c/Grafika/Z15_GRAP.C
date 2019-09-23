#include<graphics.h>
#include<stdio.h>
#define LEFT 331
#define RIGHT 333
#define UP 328
#define DOWN 336
#define ESC 27
int getkey();
main(){
	int x,y,driver,mode,c,r,key,f;
	int del=0,xtemp,ytemp;
	driver=DETECT;


	initgraph(&driver,&mode,"\\tc\\bgi");
	printf("c-promena boje");
	printf("\na-usporava");
	printf("\ns-ubrzava");
	printf("\np-povecava");
	printf("\nu-smanjuje");
	printf("\nESC-izlaz");
	x=320;y=240;r=2,c=1;f=3;
	for(;;){
		setcolor(c);
		circle(x,y,r);
		key=getkey();
		switch(key){

		case LEFT:	x-=f;
				break;
		case RIGHT:     x+=f;
				break;
		case UP:	y-=f;
				break;
		case DOWN:	y+=f;
				break;
		case 'c':	if(c==15)c=0;
				else c++;
				break;
		case ESC:	exit(0);
		case 'p':	r++;
				break;
		case 'u':       if(r>=0)	r--;
				else r=-1;
				break;
		case 's':       f++;
				break;
		case 'a':       f--;
				break;
		}
		circle(x,y,r);
		if(r==-1){
			if (del==1) {
				setcolor(BLACK);
				circle(xtemp,ytemp,1);
				setcolor(c);
			}
			setcolor(WHITE);
			circle(x,y,1);
			setcolor(c);
			del=1;
		}
		else del=0;
		xtemp=x; ytemp=y;

	}
}

int getkey(){
	int key,lowb,highb;
	key=bioskey(0);
	lowb=key& 0x00ff;
	highb=(key&0xff00)>>8;
	return ((lowb==0)?(highb+256):(lowb));
}



