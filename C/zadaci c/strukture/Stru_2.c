#include<stdio.h>

struct licnost{
     char  ime[35];
     char  adresa[50];
     unsigned dan;
     unsigned mes;
     unsigned god;
};

void citaj(struct licnost *o){
     printf("Unesite ime osobe:");
     gets(o->ime);
     printf("Unesite adresu osobe:");
     gets(o->adresa);
     printf("Unesite datum rodjenja osobe:(dd.mm.yyyy)");
     scanf("%u.%u.%u",&o->dan,&o->mes,&o->god);
     while(getchar()!='\n');
}

main(){

	struct licnost  osoba[50];
	int i,n;

	printf("Unesi broj osoba: ");
	scanf("%d",&n);
	while(getchar()!='\n');

	for(i=0;i<n;i++){
		printf("Unesi podatke za %d. osobu:\n",i+1);
		citaj(&osoba[i]);
	}

	printf("\n\nZavrsen unos podataka...\nPritisni neki taster...");
	getch();
	clrscr();

	printf("Osobe rodjene u znaku raka su:\n");

	for(i=0;i<n;i++){
		if( osoba[i].dan>21 && osoba[i].dan <=30 && osoba[i].mes==6||
		osoba[i].dan >= 1 && osoba[i].dan < 21 && osoba[i].mes==7)
		printf("%s, %s,\t%u.%u.%u\n",
		osoba[i].ime, osoba[i].adresa,osoba[i].dan,osoba[i].mes,
		osoba[i].god);
	}
	getch();
}