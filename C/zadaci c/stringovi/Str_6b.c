main(){
	char *p,*s,*t;
	clrscr(); printf("Ucitaj string:");
	gets(s); t=p;
	while(*s){
		if(*s!=' '){
			*t=*s;
			s++;
			t++;
			}
		else s++;
		}
	*t='\0';
	 printf("Rezultat je:");
	 puts(p);
	getch();
	}