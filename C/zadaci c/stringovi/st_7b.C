#include<stdio.h>
main(){
	char *s, *p;
	printf("Unesi jedan string: ");
	gets(s);
	p=s;
	while(*p){
		if (*p >='a' &&  *p<='z') *p= *p - ('a'-'A');
		p++;
	}
	puts(s);
	getch();
}
