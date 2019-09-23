/*  SEKUNDE I DANI
	Zadatak 10. 	Napisati program koji unosi ukupan broj sekundi,
   				pa odredjuje vreme u danima, casovima, minutima i sekundama.
*/

#include<stdio.h>
#include<conio.h>
main(){
	long q,d,h,m,s;

	printf("Unesi vreme u sekundama: ");
	scanf("%ld",&q);

	s=q%60;
	m=q/60;
	h=m/60;
	m%=60;
	d=h/24;
	h%=24;
	printf("(d.h.m.s) %ld.%ld.%ld.%ld\n",d,h,m,s);

	getch();
}