#include<stdio.h>
void desni(char *, int);
main(){
	char *s;
	int k;

	printf("Unesi string: ");
	gets(s);
	printf("Unesi k: ");
	scanf("%d",&k);
	desni(s,k);
	getch();
}

void desni(char *s,int k){
	if(k<=strlen(s)) puts(s+strlen(s)-k);
	else puts(s);
}