#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
main(){
	int driver,mode,x1,y1,x2,y2,i,n;
	driver=DETECT;

	randomize();
	printf("Unesi broj pravougaonika:");
	scanf("%d",&n);
	initgraph(&driver,&mode,"\\tc\\bgi");
	for(i=0;i<n;i++){
		x1=random(640);
		y1=random(480);
		x2=random(640);
		y2=random(480);
		setcolor(random(15));
		rectangle(x1,y1,x2,y2);
	}
	getch();
	closegraph();
}


