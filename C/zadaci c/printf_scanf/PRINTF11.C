#include <stdio.h>
#include <conio.h>

main(){
	int x,y,z;
	printf("Unesi tri realna broja:");
	scanf("%f %f %f",&x,&y,&z);
	printf("%g\t\t%g\t\t%g\n",x,y,z );
	printf("%e\t\t%e\t\t%e\n",x,y,z );
	getch();
}