#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
main(){
	int x,ch=219,p=0;
	long i,d=0,n=10000000l;

	clrscr();
	printf("Slucajno biranje brojeva u toku...");
	gotoxy(1,23);printf("0%");
	gotoxy(39,23); printf("50%");
	gotoxy(77,23); printf("100%");
	randomize();
	for(i=0;i<n;i++){
		x=random(100)+1;
		if(x%7==0) d++;
		if(i%(n/80)==0){
			p++;
			gotoxy(p,24);
			putchar(ch);
		}
	}
	gotoxy(1,2);
	printf("Brojeva deljivih sa 7 je izabrano: %ld", d);
	getch();

}
