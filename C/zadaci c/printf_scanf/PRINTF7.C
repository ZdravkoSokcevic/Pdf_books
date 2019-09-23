#include<stdio.h>
#include<conio.h>

main(){
	float p,v,a,b,c;
	printf("unesi stranice kvadra a, b i c: ");
	scanf("%f%f%f",&a,&b,&c);
	p = 2*a*b+2*b*c+2*a*c;
	v = a*b*c;
	printf("\nP = 2ab + 2bc + 2ac= 2*%g + 2*%g + 2*%g=%g cm2",a*b,b*c,a*c,p);
	printf("\nV = abc = %g * %g * %g = %g cm3",a,b,c,v);
	getch();
}