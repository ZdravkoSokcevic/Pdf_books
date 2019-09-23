#include <stdio.h>
#include <math.h>
#include <conio.h>main(){	float a,b,c,p,s;	printf("Unesi stranice trougla \na= "); scanf("%f",&a);
	printf("b= "); scanf("%f",&b);
	printf("c= "); scanf("%f",&c);

	if (a+b>c && a+c>b && b+c>a){
				s=(a+b+c)/2;
				p=sqrt(s*(s-a)*(s-b)*(s-c));
				printf("p= %.3f\n",p);
	}
	else printf("NEMOZE SE NACRTATI TROUGAO\n");

	getch();
}