#include <stdio.h>
#include <conio.h>
main(){

	int h, m, s, sec;

	printf("Uneti ( h:m:s): ");
	scanf("%d:%d:%d",&h,&m,&s);
	sec= 3600*h + 60*m +s;
	printf("Ukupno sekundi: %d",sec);
	getch();
}