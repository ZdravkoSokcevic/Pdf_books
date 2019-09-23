#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int driver, mode,x,y;
	driver = DETECT;
	randomize();
	initgraph(&driver, &mode,"\\tc\\bgi");
	x=getmaxx();
	y=getmaxy();

	while(!kbhit()){
		putpixel(random(x),random(y),random(15));
		delay(1000);
	}
	getch();
	closegraph();
}