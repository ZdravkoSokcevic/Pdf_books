#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct ucenik{
	 char  ime[35];
	 char  adresa[50];
	 unsigned raz;
	 unsigned ode;
};

char *clrspa(char *s);
struct ucenik fcitaj(FILE *f){
		struct ucenik o;
		char ch, *s,*p;
		int i;

	s=(char *)malloc(50);
	p=(char *)malloc(50);

	s=p;
	for(i=0;i<35;i++){
		ch=fgetc(f);
		*p++=ch;
	}
	*p='\0';
	s=clrspa(s);
	strcpy(o.ime,s);

	s=p;
	for(i=0;i<50;i++){
		ch=fgetc(f);
		*p++=ch;
	}
	*p='\0';
	s=clrspa(s);
	strcpy(o.adresa,s);

	fscanf(f,"%u%u",&o.raz,&o.ode);
	ch=fgetc(f);
	return o;

}

main(){

	struct ucenik x;
	FILE *f;
	int i,n,m;

    clrscr();
	if((f=fopen("\\BORLANDC\\ZADACI\\DATA\\ucenik.txt","r"))==NULL){
		printf("Nemogu da otvorim datoteku\n");
		exit(0);
	}


	printf("Unesi razred: ");
	scanf("%d",&n);

	printf("Unesi odeljenje: ");
	scanf("%d",&m);

	x=fcitaj(f);
	while(1){

		if(feof(f)) break;
		if(x.raz == n && x.ode==m)
			printf("%s, %s, RAZRED: %d, ODELJENJE: %d\n",
		x.ime,x.adresa,x.raz,x.ode);
				x=fcitaj(f);
	}

	fclose(f);

	printf("\n\nZavrsen unos podataka...\nPritisni neki taster...");
	getch();
}
char *clrspa(char *p){


	while(*p==' ')p++;

	return p;
}