#include<stdio.h>

main(){
	char *p;

	gets(p); /* ucitava string sa tastature do pojave \n */

	while(*p != '\0') putchar(*p++);

	getch();
}

