#define n 10
#include<stdlib.h>
#include<conio.h>
main(){
	int a[n];
	int i,j,p,pom;
	clrscr();
	printf("unesi 10 elemenata niza:");
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
			if(a[i]>a[j]){
			     pom=a[i];
			     a[i]=a[j];
			     a[j]=pom;
			}
	p=1;
	for(i=0;i<n-1;i++)
		if(a[i]!=a[i+1]) p++;
	printf("Razlicitih elemenata ima:%d\n",p);
	for(i=0;i<n;i++) printf("%d, ",a[i]);
	getch();
}