#include<math.h>
#define PI  3.141592
void obim_povrsina(float,float*,float*);
main(){
    float r,*ob,*pov;
    printf("Unesi poluprecnik: ");scanf("%f",&r);
    obim_povrsina(r,ob,pov);
    printf("Obim:%.2f,Povrsina:%.2f \n",*ob,*pov);
    getch();
}
void obim_povrsina(float r,float *O,float *P){
    *O=2*r*PI;
    *P=r*r*PI;
}