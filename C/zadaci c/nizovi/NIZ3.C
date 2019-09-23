#include<stdlib.h>
main(){
 int min ,i , a[10],index;
 clrscr();
 printf("Unesi 10 elemenata niza: ");
 for(i=0;i<10;i++) scanf("%d",&a[i]);

 min=a[0];index=0;
 for(i=1;i<10;i++) 	if(a[i]<min){
				min=a[i];
				index=i;
			}
 printf("min=%d",min);
 printf("\n index:%d",index);
 getch();
}