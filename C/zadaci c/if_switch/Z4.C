#include <stdio.h>#include <conio.h>main(){
	int a,b,c,d,min;
	printf("Unesi celobrojne vrednosti a,b,c,d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	if(d<min) min=d;

	printf("Najmanja vrednost je %d",min);

	getch();
}

