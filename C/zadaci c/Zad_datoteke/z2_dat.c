#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int zn;
	FILE *pf;
	int broj;
	/* otvaranje fajla bez kontrole */
	pf=fopen("test.txt", "r");
	broj=0;

	while((	zn=getc(pf))!=EOF) broj++;
	printf("%d\n", broj);
	fclose(pf);
	getch();
}