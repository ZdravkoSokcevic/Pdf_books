#define PI 3.141592
#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	float p,r,h,m,v,s,b;
	printf("Unesi poluprecnik osnove kupe: ");
	scanf("%f",&r);
	printf("Unesi visinu prave kupe: ");
	scanf("%f",&h);
	s=sqrt(h*h+r*r);
	b=r*r*PI;
	m=r*PI*s;
	p=b+m;
	printf("\nB = r^2 * PI = %g^2 * PI = %g * PI = %gcm2",r,r*r,b);
	printf("\nM = r * PI * s = %g * PI * %g = %gcm2",r,s,m);
	printf("\nP = B + M = %g + %g = %gcm2",b,m,p);
	getch();
}