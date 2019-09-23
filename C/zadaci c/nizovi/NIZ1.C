#include<stdlib.h>
main(){
  int max,i,a[1000];
  randomize();
  for(i=0;i<1000;i++)
      a[i]=random(10000);
  max=a[0];
  for(i=1;i<1000;i++)
      if(a[i]>max) max=a[i];

  printf("max=%d",max);
  getch();
}
