#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main(){
	int driver,mode;
	int x1,x2,i,a;
	driver=DETECT;
	printf("Unesi koordinate x1 i x2:");
	scanf("%d %d",&x1,&x2);
	initgraph(&driver,&mode,"\\tc\\bgi");
	a=50;
	for(i=x1;i<=x2;i++){
		setcolor(WHITE);
		rectangle(i,100,i+a,250);
		delay(10000);
		setcolor(BLACK);
		rectangle(i,100,i+a,250);
	}
        setcolor(WHITE);
	rectangle(i,100,i+a,250);
	getch();
	closegraph();
}
