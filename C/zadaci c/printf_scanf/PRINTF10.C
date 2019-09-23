#include<stdio.h>
#include<conio.h>

main(){
	float a,p,o;
	printf("Unesi stranicu kvadrat a: ");
	scanf("%f",&a);
	p=a*a;
	o=a+a+a+a;
	printf("\n P = a^2 = %g^2 = %gcm2\n",a,p);
	printf("\n O = 4 * a = 4 * %g = %gcm",a,o);
	getch();
}