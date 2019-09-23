#include<conio.h>
#include<stdlib.h>
#include<dos.h>

main(){
      int  i,j=1;
      clrscr();

      for(i=1;i<25;i++){
	gotoxy(1,i);
	textcolor(i);
	for(j=0;j<80;j++)putch(196);
      }
      getch();
      }
