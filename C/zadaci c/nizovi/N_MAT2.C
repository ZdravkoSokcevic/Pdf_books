#include<stdlib.h>
#include<conio.h>
main(){
	int a[50][50];
	int i,j,m,n,s;
	clrscr();
	randomize();
	printf("Unesi broj vrsta i kolona:");
	scanf("%d%d",&m,&n);
	printf("Unesi elemente matrice: \n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) a[i][j]=random(10);
	s=0;
	for(i=0;i<n;i++)s+=a[0][i]; /*sumira prvu vrstu matrice */
	printf("\n\n\n Uneta je matrica; \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) printf("%4d",a[i][j]);
	printf("\n");
	}
	printf("Suma prve vrste matrice je:%d",s);
	getch();
}