#include <conio.h>
#include <stdio.h>
main(){
	int n;
	int n500;
	int n100;
	int n1;
	printf("unesi cenu proizvoda;");
	scanf("%d",&n);
	n500=n/500;
	n100=(n%500)/100;
	n1=(n%500)%100;
	printf("\nBr.novcanica od 500 je:%d",n500);
	printf("\nBr.novcanica od 100 je:%d",n100);
	printf("\nBr.novcanica od 1 je:%d",n1);
	getch();
}

