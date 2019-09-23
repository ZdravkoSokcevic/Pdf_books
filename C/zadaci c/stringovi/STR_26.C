#include<stdio.h>
char *praznina1(char *);
main(){
	char *s,*t;


	printf("Unesi string: ");
	gets(s);

	t=praznina1(s);
	puts(t);
	getch();
}

char *praznina1(char *s){
	char *p,*t;
	t=p;
	while (*s){
		if(*s==' '){
			*p=*s;
			while(*s==' ')s++;

		}
		else{ *p=*s; s++;}
		p++;
	}
	*p='\0';
	return t;

}