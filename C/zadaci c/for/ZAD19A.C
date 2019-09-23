#include <conio.h> 	/*ucitava biblioteku conio.h */
main(){
	int i,j;
	clrscr(); 	/*funkcija cisti ekran */
	for(i=0;i<15;i++){
		for(j=0;j<25;j++) printf("%c",254); /*stampa jedan red */
		printf("\n");
	}
	getch();
}