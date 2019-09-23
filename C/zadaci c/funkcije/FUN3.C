long fakt(int);
main(){
	long n,s;
	int i;
	printf("Unesi n:");
	scanf("%ld",&n);
	s=0;
	for(i=1;i<=n;i++) s+=fakt(i);
	printf("\nSuma faktorijela je:%ld\n",s);
	getch();
}
long fakt(int n){
	long i,s=1;
	for(i=1;i<=n;i++)s*=i;
	return s;
}