#include <stdio.h>
struct licnost{

	char ime[30];
	char adresa[50];
	unsigned starost;
}
main(){

	struct licnost osobal, osoba2, s;
	printf("Unesite ime prve osobe: ");
	gets(osobal.ime);
	printf("Unesite adresu prve osobe: ");
	gets(osobal. adresa);
	printf("Unesite starost prve osobe: ");
	scanf("%u",&osobal.starost);
	while (getchar()!='\n'); /* ocistiti ulazni string iz scanf jer je "nova linija" separator */
	printf("\nUnesite ime druge osobe: ");
	gets(osoba2.ime);
	printf("Unesite adresu druge osobe: ");
	gets(osoba2. adresa);
	printf("Unesite starost druge osobe: ");
	scanf("%u",&osoba2.starost);

	if (osobal.starost > osoba2.starost) s=osobal;
	else s=osoba2;

	printf ("Stariji je:\n" );
	printf("%s, %s, Star:%u g.\n",s.ime,s.adresa,s.starost);
	getch();

}