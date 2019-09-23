#include<stdio.h>
void levi(char *, int);
main(){
	char *s;
	int k;

	printf("Unesi string: ");
	gets(s);
	printf("Unesi k: ");
	scanf("%d",&k);
	levi(s,k);
	getch();
}

void levi(char *s,int k){
	while (k && *s){
		putchar(*s++);
		k--;
	}
	putchar('\n');
}