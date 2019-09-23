#include<stdlib.h>
#include<conio.h>

void ucitaj(int m, int n, int a[][]);
void pisi(int m, int n, int a[][]);

main(){
	int a[50][50],b[50][50],c[50][50];
	int i,j,m,n;

	clrscr();
	randomize();

	printf("Unesi broj vrsta i kolona:");
	scanf("%d%d",&m,&n);

	ucitaj(m,n,a);

	ucitaj(m,n,b);

	for(i=0;i<m;i++)
		for(j=0;j<n;j++) c[i][j]=a[i][j]+b[i][j];

	printf("\nMatrica A\n");
	pisi(m,n,a);

	printf("\nMatrica B\n");
	pisi(m,n,b);

	printf("Rezultat\n");
	pisi(m,n,c);

	getch();
      }

void ucitaj(int m, int n, int a[][50]){
	int i, j;

	printf("\nUnesi elemente matrice:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) a[i][j]=random(10);
}

void pisi(int m, int n, int a[][50]){
	int i,j;
	printf("\n Uneta je matrica:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) printf("%4d",a[i][j]);
		printf("\n");
	}
}