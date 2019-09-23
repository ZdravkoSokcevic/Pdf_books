#include <stdlib.h>
main(){
	int p,x,i,n;
	p=0;
	printf("Slucajno biranje 10 celih brojeva od 1 do 100:\n");
	randomize();
	for(i=0;i<10;i++){
		x=1+random(100);
		printf("%d,\t",x);
		if(x%2==0)p++;	/* broji parne brojeve */
	}
	printf("\nParnih brojeva ima p = %d\n",p);
	getch();
}