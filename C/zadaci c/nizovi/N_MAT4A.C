#include<stdlib.h>
#include<conio.h>

void ucitaj(int m, int n, int a[50][50]);
void pisi(int m, int n, int a[50][50]);

main(){
	int a[50][50];
	int i,j,m,n,p;

	clrscr();
	printf("Unesi broj vrsta i kolona:");
	scanf("%d%d",&m,&n);

	ucitaj(m,n,a);

	p=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) if(a[i][j]==0) p++;

	pisi(m,n,a);

	printf("Broj elemenata jednakih nuli je: %3d",p);
	getch();
      }

void ucitaj(int m, int n, int a[50][50]){
	int i, j;

	printf("\nUnesi elemente matrice:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) scanf("%d",&a[i][j]);
}

void pisi(int m, int n, int a[50][50]){
	int i,j;
	printf("\n\n\n Uneta je matrica:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) printf("%4d",a[i][j]);
		printf("\n");
	}
}