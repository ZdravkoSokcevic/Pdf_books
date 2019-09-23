#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


void kvadrat1 (int x1,int y1,int l){

	float k;
	line(x1,y1,x1+l,y1);
	line(x1+l,y1,x1+l,y1+l);
	line(x1+l,y1+l,x1,y1+l);
	line(x1,y1+l,x1,y1);
}
main(){
	int driver,mode;
	int x1,y1,i,k,l;
	driver=	DETECT;
	printf("Unesi koordinate (x1,y1):");
	scanf("%d%d",&x1,&y1);
	printf("Unesi duzinu stranice l:");
	scanf("%d",&l);
	initgraph(&driver,&mode,"\\tc\\bgi");
	setbkcolor(RED);
	setcolor(YELLOW);
	k=0;
	for(i=0;i<100;i++){
	kvadrat1(x1-k,y1-k,l+2*k);
	k+=2;
	}
	kvadrat1(x1,y1,l);
	getch();
	closegraph();
}
