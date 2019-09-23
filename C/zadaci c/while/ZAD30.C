#include <stdlib.h>
main(){
	int x,i,n,preth;
	i=2;
	n=0;
	printf("Slucajno biranje 100 000 celih brojeva od 0 do 9999:\n");
	randomize();
	preth=random(10000);
	x=random(10000);
	while(x!=preth && i<100000L){
		preth=x;
		x=random(10000);
		i++;
		n++;
	}
	if(x==preth)
		printf("\nPonovljeni brojevi: %d, %d, posle %d biranja\n",preth,x,n);
	else printf("Nije bilo ponovljenih vrednosti\n");

	getch();
}