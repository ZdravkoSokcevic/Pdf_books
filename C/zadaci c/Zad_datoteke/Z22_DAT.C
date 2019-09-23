#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<math.h>

void ucitaj(float a[10][10], int n, int m);
void upis(float a[10][10], int n,int m);
void ispis(float a[10][10], int n,int m);


main(){
	int n,m;
	float  p[10][10];
	printf("\nUnesi broj kolona i broj vrsta matrice (n,m): ");
	scanf("%d%d",&n,&m);

	ucitaj(p,n,m);
	printf("Ucitana je matrica ...\n");
	upis(p,n,m);
	ispis(p,n,m);

	getch();
}
void ucitaj (float a[10][10],int n,int m){
	int i,j;

	for (i=0;i<m;i++){
		for(j=0;j<n;j++)
			scanf("%f",&a[i][j]);


	}
}
void upis (float a[10][10],int n,int m){

	int i,j;
	FILE *fp;
	char ime[40]="\\borlandc\\zadaci\\data\\matrica.txt";
	/* Otvara se nova fajla za upis */
	if((fp=fopen(ime,"w"))==NULL){
		printf("Nije uspesno otvorena datoteka\n");
		 exit(0);
	}

	fprintf(fp,"%6d%6d\n",n,m);
	for (i=0;i<m;i++){
		for(j=0;j<n;j++)
			fprintf(fp,"%.2f\t",a[i][j]);
		fprintf(fp,"\n");

	}
	fclose(fp);
}
void ispis(float a[10][10],int n, int m){
	int i,j;
	printf("\n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++) printf("%.2f\t",a[i][j]);
		printf("\n");
	}
}