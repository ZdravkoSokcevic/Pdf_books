#include<math.h>
#include<stdlib.h>

void trougao(int *, int *, int *);
float povrsina(float,float,float);
void sortiraj(float *a,int);

main(){
	float t[1000][5];
	int a,b,c,n;
	float p,o;
	int  i,j;

	clrscr(); randomize();

	printf("Formiranje niza trouglova, unesi broj trouglova: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		trougao(&a,&b,&c);
		t[i][0]=a;
		t[i][1]=b;
		t[i][2]=c;
		t[i][3]=povrsina(a,b,c);
		t[i][4]=a+b+c;
	}

	sortiraj(t,n);

	printf("\nIzabrani trouglovi su:\n");
	for(i=0;i<n;i++)
	printf("%d.\ta = %.0f,\tb = %.0f,\tc = %.0f,\tP = %.2f\tO = %.2f\n",
	i+1,t[i][0],t[i][1],t[i][2],t[i][3],t[i][4]);
	getch();
}

void trougao(int *a,int *b,int *c){
	do{ 	*a=1+random(99);
		*b=1+random(99);
		*c=1+random(99);
	}while(!(*a+*b>*c && *a+*c>*b && *b+*c>*a));
}

float povrsina(float a,float b, float c){
	float s;

	s=(a+b+c)/2.;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

void sortiraj(float *a, int n){
	int i,j,k;
	float pom[5];

	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++){
			if(*(a+i*5+3)<*(a+j*5+3)){
				for(k=0;k<5;k++) pom[k]=*(a+i*5+k);
				for(k=0;k<5;k++) *(a+i*5+k)=*(a+j*5+k);
				for(k=0;k<5;k++) *(a+j*5+k)=pom[k];
			}
		}
}


