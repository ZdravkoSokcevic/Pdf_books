#include <math.h>
#include <stdlib.h>

void trapez(int*,int*,int*);
float povrsina(float, float, float);
float obim (float, float, float);
void sortiraj (float *a, int);

main(){
             float   t [1000][5] ;
             int      a,b,c,n ;
             float   P,O ;
             int      i, j ;

             clrscr ();  randomize ();
	     printf ("Formiranje niza trapeza, unesi broj trapeza: ");
	     scanf ("%d",&n);

             for ( i=0; i<n; i++){
                                trapez (&a, &b, &c);
                                t[i][0]= a;
                                t[i][1]= b;
                                t[i][2]= c;
				t[i][3]= povrsina(a,b,c);
                                t[i][4]= obim (a,b,c);
             }
	     sortiraj (t,n);
	     printf ("\nIzabrani trapezi su :\n");

             for (i=0; i<n; i++)
	     printf ("%d . \ta=%.0f, \tb=%.0f, \tc=%.0f, \tP=%.2f, \O=%.2f \n" ,
                          i+1, t[i][0], t[i][1], t[i][2], t[i][3], t[i][4]);
             getch ();
}

void trapez (int *a, int *b, int *c){
			    *a = 1+ random (9) ;
			    *b = 1+ random (9) ;
			    *c = 1+ random (9) ;

}
float povrsina (float a, float b, float c){
	 float h, p ;
	 h = sqrt ( c*c - ((a-b)/2)*((a-b)/2));
	 p= ((a+b)/2 ) * h ;
	 return p;
}
float obim (float a, float b, float c){
	 float o ;
	 o = a+b+2*c ;
	 return o;
}

void sortiraj (float *a, int n){
         int      i, j, k ;
         float   pom [5] ;
         for (i=0; i<n-1; i++)
                       for (j=i; j<n; j++){
                                     if (*(a+i*5+3)<*(a+j*5+3)){
                                             for (k=0; k<5; k++) pom [k]=*(a+i*5+k);
                                             for (k=0; k<5; k++)*(a+i*5+k)=*(a+j*5+k);
                                             for (k=0; k<5; k++)*(a+j*5+k)= pom [k];
                                     }
                       }
         }


