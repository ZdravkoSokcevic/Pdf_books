#include <stdlib.h>
main(){
	int x,i,j;
	printf("Slucajno biranje 300 celih brojeva od 1 do 10:\n");
	randomize();
	for(i=0;i<15;i++){
		for(j=0;j<20;j++){
			x=random(10);
			printf("%d, ",x);
		}
		printf("\n");
	}
	getch();
}