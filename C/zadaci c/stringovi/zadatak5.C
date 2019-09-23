/* Uradio Marko Matovic III2 */
#include<stdio.h>
int broji (char ch, char *s);
main(){
	char *s, ch;
	int n;
	printf("Unesi string:\n");
	gets(s);
	printf("Unesi znak:");
	scanf("%c", &ch);
	n=broji (ch,s);
	printf("Broj pojavljivanja: %d\n", n);
	getch();
}
int broji (char ch, char *s){
	int b=0;
	char *p;
	p=s;
	while (*p){
		if(*p==ch) b++;
		p++;}
		return b;
		  }