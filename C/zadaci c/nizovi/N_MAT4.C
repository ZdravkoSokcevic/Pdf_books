#include<stdlib.h>
#include<conio.h>
main(){
	int a[50][50];
	int i,j,m,n,p;

	clrscr();
	printf("Unesi broj vrsta i kolona:");
	scanf("%d%d",&m,&n);

	printf("Unesi elemente matrice:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) scanf("%d",&a[i][j]);

	p=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) if(a[i][j]==0) p++;

	printf("\n\n\n Uneta je matrica:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("Broj elemenata jednakih nuli je: %3d",p);
	getch();
      }