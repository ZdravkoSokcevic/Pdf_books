#include<stdlib.h>
main(){
	int a[100],b[100],c[200];
	int i,m,n,k;
	printf("\nUnesi broj elemenata prvog niza:");
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
		printf("Unesi broj elemenata drugog niza:");
		scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	k=0;
	for(i=0;i<n;i++)
		if(a[i]%2==0){
			c[k]=a[i];
			k++;
		}
	for(i=0;i<m;i++)
		if(b[i]%2==0){
			c[k]=b[i];
			k++;
		}
	printf("\n");
	for(i=0;i<n;i++) printf("%d, ",a[i]);
	printf("\n");
	for(i=0;i<m;i++) printf("%d, ",b[i]);
	printf("\n");
	for(i=0;i<k;i++)
		printf("%d, ",c[i]);
	getch();
}