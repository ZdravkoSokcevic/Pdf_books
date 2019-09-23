int broj(char x,char *s);
main(){
 char *p,*s, *t;
 int b1,b2,a1,a2;
 clrscr();

 printf("Unesi dva stringa:\n");
 gets(p);  gets(s);

 b1=b2=a1=a2=0;
 t=p;
 while(*t++) b1++;  /*broji znake stringa *p */
 t=s;
 while(*t++) b2++;  /*broji znake stringa *s */

 t=p;
 a1=broji('a',t);
 t=s;
 a2=broji('a',t);

 printf("U stringu p znak a pojavljuje se: %.2f\n",(float)a1/b1*100);
 puts(p);
 printf("U stringu s znak a pojavljuje se:%.2f\n",(float)a2/b2*100);
 puts(s);
 getch();
}
int broji(char x, char *t){
	int b=0;
	while(*t) if (*t++==x) b++;
	return b;
}
