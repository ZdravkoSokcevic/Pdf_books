#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	FILE *ulaz;
	int i,broj,n;
	if((ulaz=fopen("brojevi.txt","w"))==NULL){
		printf("Ne mogu da otvorim datoteku \"brojevi.txt\"!\n");
		exit(1);
		}
    randomize();
	printf("Unesi vrednost za n: ");
	scanf("%d",&n);
	fprintf(ulaz,"%d\n",n);
	for(i=0;i<n;i++){
		broj=random(100);
		fprintf(ulaz,"%2d",broj);
		if((i+1)%20==0)
			fprintf(ulaz,"\n");
		}
	fclose(ulaz);
	getch();
    }
