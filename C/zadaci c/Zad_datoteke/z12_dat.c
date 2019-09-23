#include<stdio.h>
#include<stdlib.h> //Zbog exit()
#include<conio.h>

void main() {
	FILE *ulaz, *izlaz;
	int i, broj, suma=0;
	if((ulaz = fopen("brojevi.dat", "w")) == NULL){
		printf("Ne mogu da otvorim datoteku \"brojevi.dat\"!\n");
		exit(1);
	}
	printf("\nUnesi 3 broja u datoteci:");
	for(i=0;i<3;i++){
		scanf("%d",&broj);
		fwrite(&broj, sizeof(broj),1,ulaz);
	}
	fclose(ulaz);
	getch();

	if((izlaz = fopen("brojevi.dat", "r")) == NULL){
		printf("Ne mogu da otvorim datoteku \"brojevi.dat\"!\n");
		exit(1);
	}
	for(i=0;i<3;i++){
		fread(&broj, sizeof(int),1,izlaz);
		suma+=broj;
	}
	printf("\nSuma brojeva u datoteci je: %d",suma);
	fclose(izlaz);
	getch();
}