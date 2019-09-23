#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(int argc,char *argv[]){
	FILE *dat;
	int c, brotv=0, brzatv=0;

	clrscr();
	if(argc!=2)
	{
		  printf("\nNiste uneli fajl\n");
		  exit(1);
	}
	else{
		  if((dat=fopen(argv[1],"r"))==NULL)
			 printf("Fajl %s se ne moze otvoriti!!",argv[1]);

		  else{
			while((c=getc(dat))!=EOF)
			{
				if(c=='(') brotv++;
				if(c==')') brzatv++;
			}
		  }
	 }
	 if(brotv > brzatv)
		printf("\n\n\t Ima vise otv. nego zatv. zagrada u %s fajlu",argv[1]);

	 if(brotv < brzatv)
		printf("\n\n\t Ima vise zatv. nego otv. zagrada u %s fajlu",argv[1]);

	 if(brotv == brzatv)
		printf("\n\n\t Zagrade su ispravno zapisane u %s fajlu",argv[1]);
	 fclose(dat);
	 printf("\nPritisni neki taster\n");
	 getch();

}
