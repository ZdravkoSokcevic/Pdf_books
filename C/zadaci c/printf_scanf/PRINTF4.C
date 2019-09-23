#include <stdio.h>
#include <conio.h>

main(){
	char ch;
	printf("Unesi znak: ");
	scanf("%c",&ch);
	printf("\n\nZnak\tASCII kod\n");
	printf("%c \t %d \n",ch, ch);
	printf("%c \t %d \n",ch+1, ch+1);
	printf("%c \t %d \n",ch+2, ch+2);
	printf("%c \t %d \n",ch+3, ch+3);
	getch();
}