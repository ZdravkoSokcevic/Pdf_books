#include<stdio.h>
#include<conio.h>

main(){
	int cena;
	int _500, _100, _1;
	printf("\nUnesi cenu proizvoda: ");
	scanf("%d",&cena);
	_500=cena/500;
	cena=cena%500;
	_100=cena/100;
	_1=cena%100;
	printf("Potrebno je %d novcanica od 500 dinara,",_500);
	printf(" %d od 100 dinara i %d novcanica od jednog dinara",_100,_1);
	getch();

}