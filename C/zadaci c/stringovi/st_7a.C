#include<stdio.h>
char *preskoci (char *); /* PRESKACE SVE PRAZNINE */
char *praznine(char *);  /* PRESKACE SVE ZNAKE DO PRVE PRAZNINE */
main(){
	char *s, *p;
	int n=0;
	printf("Unesi jedan string: ");
	gets(s);
	p=s;
	p=preskoci(p);  /* PRESKACE POCETNE PRAZNINE U STRINGU */
	while(*p){
		p=praznine(p);
		n++;
		if (*p==' ') p=preskoci(p);
	}
	printf("Broj reci: %d\n", n);
	getch();
}
char *preskoci(char *s){     /*FUNKCIJA PRESKACE PRAZNINE*/
	while(*s==' ') s++;
	return s;
}
char *praznine( char *s){   /* FUNKCIJA PRESKACE REC */
	while(*s !=' ' && *s) s++;
	return s;

}