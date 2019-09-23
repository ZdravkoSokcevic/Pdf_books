#include<conio.h>
#include<stdlib.h>
main(){
	int x,ch;

	clrscr();

	randomize();

	ch=getch();
	while (ch!='k' && ch!='K'){
		x=random(8);
		switch(x){
			case 0: printf("Dobar dan.\n");
				break;
			case 1:	printf("Nije fer!\n");
				break;
			case 2:	printf("Ludo se provodim\n");
				break;
			case 3:	printf("Da li ste raspolozeni za ples?\n");
				break;
			case 4:	printf("Olado malo.\n");
				break;
			case 5:	printf("Dovidjenja.\n");
				break;
			case 6:	printf("Zauzeta sam veceras\n");
				break;
			case 7:	printf("Mozda drugi put\n");
				break;
		}
		ch=getch();
	}
	getch();
}


