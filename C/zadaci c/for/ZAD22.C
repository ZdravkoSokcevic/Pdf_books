main(){
	int x,p,i;		/*najava celobrojnih promenljivih */
	p=1;
	printf("Unesi 10 celih brojeva:");
	for(i=0;i<10;i++){      /*pocetak ciklusa  br.ponavljanja 10x*/
		scanf("%d",&x); /*ucitava celi br. i dodeljuje ga x-u */
		if(x%2==0) p*=x;           /* skr. p=p*x, */
	}
	printf("\np = %d\n",p);  /* s = ...   */
	getch();
}