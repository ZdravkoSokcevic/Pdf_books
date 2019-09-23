#include <stdio.h>
#include <conio.h>
#define PI 3.141592

main (){
	float r,h,b,v,m,p;
	printf("Unesi poluprecnik osnove valjka r: ");
	scanf ("%f",&r);
	printf("Unesi visinu valjka H: ");
	scanf ("%f",&h);
	b=r*r*PI;
	m=2*r*PI*h;
	p=b+m;
	v=b*h;
	printf("\n\nB = %gcm2\nM = %gcm2\n",b,m);
	printf("P = B + M = %gcm2\nV = B * H = %gcm3\n",p,v);
	getch();
}