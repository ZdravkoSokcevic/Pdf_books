#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
	float a,H,b,m,p;
	printf("Unesi a: ",a);
	scanf("%f",&a);
	printf("Unesi H: ",H);
	scanf("%f",&H);
	b=(a*a*sqrt(3))/4;
	m=3*a*H;
	p=2*b+m;
	printf("B = (a^2 * sqrt(3)) / 4 = (%g^2*sqrt(3))/4 =\n",a);
	printf("= %g /4 = %g",a*a*sqrt(3),b);
	printf("\nM = 3*a*H = 3* %g * %g = %g",a,H,m);
	printf("\nP = 2* b +m = 2* %g + %g = %g",b,m,p);
	getch();
}