main(){
	float x,s;
	int i;
	s=0;
	printf("Unesi 10 realnih brojeva:");
	for(i=0;i<10;i++){
		scanf("%f",&x);
		s+=x*x;
	}
	printf("\ns = %.2f\n",s);
	getch();
}