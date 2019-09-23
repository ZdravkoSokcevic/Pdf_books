#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<math.h>

void upis(float * a);       /* NAJAVE FUNKCIJA upis(), ispis() i pomnozi() */
void ispis(float * a);
float *pomnozi(float * a);

main(){
	float p[20];			/* NAJAVA REALNOG NIZA */
	upis(p);
	printf("Niz je upisan u datoteku:\n");
	ispis(p);
	printf("Pomnozen niz : \n");
	ispis(pomnozi(p));
	getch();
}

void upis(float *a){
	int i;
	FILE *fp;     /*NAJAVA FILE PROMENLJIVE */
	char ime[20]; /* NAJAVA NIZA ZNAKOVA - STRING */
	printf("Unesi ime datoteke u koju treba upisati niz ?");
	scanf("%s",ime);
	fp=fopen(ime,"w"); /* Otvara se nova DATOTEKA  */
	for (i=0;i<=2;i++){
		printf("Daj %d\n",i);
		scanf("%f",&a[i]);
		fprintf(fp,"%f\n",a[i]);
	}
	fclose(fp);
}

void ispis(float *a){
	int i;
	printf("\n");
	for (i=0;i<=2;i++){
		printf("Evo %d %f\n",i,a[i]);
	}
}

float *pomnozi(float *a){
	int i;
	float rez[20];
	for (i=0;i<=2;i++)
		rez[i]=10*a[i];
	return(rez);
}