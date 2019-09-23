#include <stdio.h>
struct licnost{

	char ime[30];
	char adresa[50];
	unsigned starost;
};

void citaj(struct licnost *o){

	printf("Unesite ime osobe: ");gets(o->ime);
	printf("Unesite adresu osobe: ");gets(o->adresa);
	printf("Unesite starost osobe: ");scanf("%u",&o->starost);

	while (getchar()!='\n');
}

main(){

	int i,n;
	struct licnost osoba[20], *p;
	printf("Unesi broj osoba:(<=20) \n");
	scanf("%d",&n);
	while(getchar()!='\n');
	for(i=0;i<n;i++) {
		printf("Unesi podatke za %d. osobu:\n",i+1);
		citaj(&osoba[i]);
	}

	/* prvi nacin za ispis ucitanih vrednosti */

	for (i=0;i<n;i++)
		printf("%s, %s, star %u g.\n", osoba[i].ime,
		osoba[i].adresa, osoba[i].starost);

	/* drugi nacin ispisa koriscenjem pokazivaca */

	for (p=osoba;p<osoba+n;p++)

		printf("%s, %s, star: %u g.\n",p->ime, p->adresa, p->starost);
	getch();
}