#include<math.h>
#include<stdlib.h>

void trougao(int *, int *, int *);
float povrsina(float,float,float);

main(){
	float t[50][4];
	int a,b,c,n;
	float p;
	int  i,j;

	clrscr(); randomize();

	printf("Formiranje niza trouglova, unesi broj trouglova: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		trougao(&a,&b,&c); /*formiranje trougla */

		t[i][0]=a;  /*upisivanje izabranih elemenata u matricu*/
		t[i][1]=b;
		t[i][2]=c;
		t[i][3]=povrsina(a,b,c);
	}

	printf("\nIzabrani trouglovi su:\n");
	for(i=0;i<n;i++)
	printf("%d.\ta = %.0f,\tb = %.0f,\tc = %.0f,\tP = %.2f\n",
	i+1,t[i][0],t[i][1],t[i][2],t[i][3]);
	getch();
}

void trougao(int *a,int *b,int *c){
	do{ 	*a=random(9)+1;
		*b=random(9)+1;
		*c=random(9)+1;
	}while(!(*a+*b>*c && *a+*c>*b && *b+*c>*a));
}

float povrsina(float a,float b, float c){
	float s;

	s=(a+b+c)/2.;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

