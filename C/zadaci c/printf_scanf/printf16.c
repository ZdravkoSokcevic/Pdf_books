#include <math.h>
#include <stdio.h>
#include <conio.h>
main(){
	float x;
	printf ("Unesi realni broj x: ");
	scanf ("%f",&x);
	printf ("koren: %g \n ",sqrt(x));
	printf("kvadrat:%g \n",x*x) ;
	printf("kub: %g \n ",x*x*x);
	getch ();
}