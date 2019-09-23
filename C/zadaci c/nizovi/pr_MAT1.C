main(){
	float a[100][100];
	int i,j,m,n;
	clrscr();
	printf("Unesi broj kolona(m> i broj vrsta(n):");
	scanf("%d%d", &m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) scanf("%f",&a[i][j]);
	printf("Uneta matrica je:\n\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) printf("%.2f\t", a[i][j]);
		printf("\n");
	}
	getch();
}