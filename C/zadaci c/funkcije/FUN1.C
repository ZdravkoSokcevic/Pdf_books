 #include<math.h>
 float hip(float,float);
 main(){
	float c,a,b;
	printf("unesi katete:");
	scanf("%f%f",&a,&b);
	c=hip(a,b);
	printf("\n c=%.2f",c);
	getch();
 }

 float hip(float x,float y){
	return sqrt(x*x+y*y);
 }