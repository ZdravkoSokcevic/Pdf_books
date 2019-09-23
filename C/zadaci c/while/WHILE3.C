#include <math.h>
main(){
	double s,x,eps,p;
	int n,i;
	n=1;
	s=1.0;
	printf("Unesi x:"); scanf("%lf",&x);
	printf("Unesi eps:"); scanf("%lf",&eps);
	p=x;

	while(fabs(p)>eps){
		s+=p;
		p=x;
		n++;
		for(i=2;i<=n;i++)
			p=-p*(-x/i);
	}
	printf("\n s=%lf",s);
	printf("\n sumiramo je %d elemenata",n);
	getch();
}