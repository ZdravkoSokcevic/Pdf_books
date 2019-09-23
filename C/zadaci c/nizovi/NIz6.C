#include<stdlib.h>
main(){
      int a[20],max,min,i,p=0,n=0;
      randomize();
      for(i=0;i<20;i++) a[i]=random(101);
      for(i=0;i<20;i++){
	      if(a[i]%2==0){
		   if(p==0){max=a[i];p=1;}
		   else if(a[i]>max)max=a[i];
	      }
	      else{
		if(n==0){min=a[i];n=1;}
		else if(a[i]<min)min=a[i];
	      }
      }
      for(i=0;i<20;i++) printf("%d, ",a[i]);
      printf("\nMAX=%d,MIN=%d\n",max,min);
      getch();
}