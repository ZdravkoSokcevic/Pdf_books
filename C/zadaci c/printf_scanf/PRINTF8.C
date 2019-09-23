#include <stdio.h>
#include <conio.h>
#define PI 3.14

main(){
	float r,p,o;
	printf("Unesi poluprecnik kruga: ");
	scanf("%f",&r);
	p=r*r*PI;
	o=2*r*PI;
	printf("P = r^2*PI = %g^2 * %g = %g * PI = %g cm2\n",r, PI,r*r,p );
	printf("O = 2*r*PI = 2* %g * PI = %g cm",r,o);
	getch();
}