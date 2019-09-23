#include <stdlib.h>
main(){
	int x,i,n;
	n=0;
	printf("Slucajno biranje 300 celih brojeva od 1 do 10:\n");
	randomize();
	do{     x=random(10);
		printf("%d, ",x);
		n++;
		getch();
	}while(x!=5);
	printf("\nBroj 5 je izabran u pokusaju broj: %d\n",n);
	getch();
}