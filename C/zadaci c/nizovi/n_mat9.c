#include<stdlib.h>
#include<conio.h>
main(){
		int a[50][50];
		int i,j,n,s;

		clrscr();
		printf("Unesi broj vrsta i kolona:");
		scanf("%d",&n);
		printf("Unesi elemente matrice:");
		for(i=0;i<n;i++)
			for(j=0;j<n;j++) scanf("%d",&a[i][j]);

		printf("Uneta je matrica:\n");
		for(i=0;i<n;i++){
				s=0;
				for(j=0;j<n;j++){
					s+=a[i][j];
					printf("%4d",a[i][j]);
				}
				printf("%8d\n",s);
		}
		getch();
}

