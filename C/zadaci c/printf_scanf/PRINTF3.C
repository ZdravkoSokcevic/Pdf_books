#include <conio.h>
#include <stdio.h>

main(){
	char ch, a;
	printf ("Unesi dva znaka:\n");
	scanf ("%c %c",&ch,&a);
	printf ("Promenljiva\t ASCII kod\n");
	printf ("%c\t\t\t %d\n",ch, ch);
	printf ("%c\t\t\t %d\n",a, a);
	getch();
}