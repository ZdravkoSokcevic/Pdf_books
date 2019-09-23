#include <math.h>
#include <stdio.h>
#include <conio.h>

#define PI 3.141592
main(){

float r,s,B,M,P,V,H;
printf("unesi poluprecnik r:");
scanf("%f",&r);
printf("unesi izvodnicu s: ");
scanf("%f",&s);
B=r*r*PI;
M=r*PI*s;
P=B+M;
H=sqrt(s*s-r*r);
V=B*H/3.;
printf("B=%g\n",B);
printf("M=%g\n",M);
printf("P=%g\n",P);
printf("V=%g",V);
getch();
}
