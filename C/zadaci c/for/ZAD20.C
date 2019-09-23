main(){
	int x,s,i;		/*najava celobrojnih promenljivih */
	s=0;
	printf("Unesi 10 celih brojeva:");
	for(i=0;i<10;i++){      /*pocetak ciklusa  br.ponavljanja 10x*/
		scanf("%d",&x); /*ucitava celi br. i dodeljuje ga x-u */
		s+=x;           /* skr. s=s+x, */
	}
	printf("\ns = %d\n",s);  /* s = ...   */
	getch();
}