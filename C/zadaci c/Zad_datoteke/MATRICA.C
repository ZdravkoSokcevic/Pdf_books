#include<stdio.h>
#include<conio.h>

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
	char ime[20];
	printf("U koju fajlu da upisem matricu?");
	scanf("%s",ime);
	fp=fopen(ime,"w"); /* Otvara se nova datoteka za upis */

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