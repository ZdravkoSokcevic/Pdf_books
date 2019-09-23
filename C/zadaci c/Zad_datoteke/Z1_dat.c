#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef enum {NETACNO, TACNO} LOGIC;
main(){
	long zn;
	FILE *pf;
	LOGIC ureci;
	long red_broj, znak_broj, rec_broj;
	pf=fopen("test.txt", "r");
	red_broj=rec_broj=znak_broj=0;

	ureci=NETACNO;

	while((zn=getc(pf))!=EOF){  
	/*EOF (End Of File) predstavlja znak za kraj datoteke */ 
		++znak_broj;

		if(zn==' ' || zn=='\t' || zn=='\n') ureci=NETACNO;
		else if(ureci==NETACNO){
			++rec_broj;
			ureci=TACNO;
		}

		if(zn=='\n')	++red_broj;
	}

	printf("%ld\n%ld\n%ld\n", red_broj,rec_broj,znak_broj);
	getch();
}