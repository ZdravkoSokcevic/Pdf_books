main(){
	char ch;
	int a,z;

	a=5;
	printf("Za kraj taster <k>, za dalje pritisni bilo koji taster\n");
	ch=getch();
	for(; ch!='k'; ){
		z=a*a;
		printf("Kvadrat broja % dje %d\n", a,  z);
		a+=5;
		ch=getch();
	}
}

