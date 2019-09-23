#include <stdio.h>
void prelom(int k,char *s);
void levi(char *s,int k);
main(){
	char *s;
	int k;

	printf("Unesi string s: "); gets(s);
	printf("Unesi broj znakova jednog reda: ");
	scanf("%d", &k);
	prelom(k,s);
	getch();
}

void prelom(int k,char *s){
	char *p=s;
	while (p<s+strlen(s)){
		levi(p,k);
		p+=k;
	}
}

void levi(char *s,int k){
	while (k && *s){
		putchar(*s++);
		k--;
	}
	putchar('\n');
}