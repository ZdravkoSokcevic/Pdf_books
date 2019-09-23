#include <stdio.h>
struct licnost{

char ime[30];
char adresa[50];
unsigned starost;
};

void citaj(struct licnost *o){

	printf("Unesite ime osobe: ");
	gets(o->ime);
	printf("Unesite adresu osobe: ");
	gets(o->adresa);
	printf("Unesite starost osobe: ");
	scanf("%u",&o->starost);
	while (getchar()!='\n');
}

main(){

	struct licnost osobal,osoba2,*s;
	printf("Unesi podatke za prvu osobu:\n");
	citaj(&osobal);
	printf("Unesi podatke za drugu osobu:\n");
	citaj(&osoba2);

	if (osobal.starost > osoba2.starost) s=&osobal;
	else s=&osoba2;

	printf("Starijije:");
	printf("%s, %s, Star: %u g.\n" ,s->ime, s->adresa,s->starost);
	getch();
}

