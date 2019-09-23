#include<stdio.h>
#include<conio.h>

main(){
	float x,y,z;
	printf("ucitati vrednosti x,y,z:");
	scanf("%f%f%f",&x,&y,&z);
	printf("\n\nx\t\ty\t\tz\n",x,y,z);
	printf("%g\t\t%g\t\t%g\n",x,y,z);
	printf("%e\t%e\t%e",x,y,z);
	getch();
}