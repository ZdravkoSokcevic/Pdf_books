#include<stdlib.h>
#include<conio.h>
main(){
	int a[50][50];
	int i,j,m,n;

	clrscr();
	printf("Unesi broj vrsta i kolona: ");
	scanf("%d%d",&m, &n);
	printf("Unesi elemente matrice:\n");

	for(i=0;i<m;i++)
		for(j=0;j<n;j++) scanf("%d",&a[i][j]);

	printf("\n\n\nUneta je matrica:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}

	getch();
}