main(){
	char *p,*s1,*s2,*t;
	clrscr();

	printf("Unesi dva stringa:");
	gets(s1);
	gets(s2);
	t=p;
	while(*s1) *t++=*s1++;
	while(*s2) *t++=*s2++;
	*t='\0';
	printf("Zbir stringova je:");puts(p);
	getch();
}