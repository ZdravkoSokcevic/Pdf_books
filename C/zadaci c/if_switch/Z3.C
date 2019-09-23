main(){
	char ch;

	printf("Unesi slovo: ");
	scanf("%c",&ch);
	if (ch >= 'A' && ch <= 'Z')
		printf("ISPRAVNO UNET ZNAK: %c\n",ch);
	else	if (ch >= 'a' && ch <= 'z'){
			ch-='a'-'A';
			printf("IZVRSENA ISPRAVKA ZNAK: %c\n",ch);
		}
		else printf("GRESKA PRI UNOSU ZNAKA\n");
	getch();
}

