#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int driver, mode,x,y,a,b,c;
	driver = DETECT;
	randomize();
	initgraph(&driver, &mode,"\\tc\\bgi");
	while(!kbhit()){
                x=random(640);
		y=random(480);

		if(y<=160) c=RED;
		if(y>160 && y<=320) c=BLUE;
		if(y>320) c=WHITE;

		putpixel(x,y,c);
	}
	getch();
	closegraph();
}