#include<stdio.h>

main(){
	char s[10] = "Zdravo!"; /* INICIJALIZACIJA STRINGA */
	char *p;

	p=s; /* s je adresa prvog elementa niza s[] */

	while(*p != '\0') putchar(*p++);

	getch();
}