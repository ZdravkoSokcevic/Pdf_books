#include<conio.h>
void crtaj(int,int);
main(){
	int a,b,ch;
	clrscr();
	ch='D';
	while(ch=='D'){
		printf("\nUnesi a i b:");
		scanf("%d%d",&a,&b);
		crtaj(a,b);
		printf("\n\nDa li zelite iscrtavanje novog pravougaonika?(D/N)");
		ch=getch();
		ch=toupper(ch);
		while(ch!='D'&& ch!='N'){
			ch=getch();
			ch=toupper(ch);
		}
	}
}
void crtaj(int a,int b){
      int i,j;
      clrscr();
      for(i=0;i<b;i++){
	for(j=0;j<a;j++) printf("%c",254);
	printf("\n");
      }
}
