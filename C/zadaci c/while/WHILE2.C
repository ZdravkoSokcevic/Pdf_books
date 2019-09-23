#define TACKA '.'
main(){
      int ch,n,u;
      float p;
      n=u=0;
      ch=getche();

      while(ch!=TACKA){
	u++;
	if(ch=='A')n++;
	ch=getche();
      }
      p=(float)n/u*100;
      printf("\nUkupno znakova:%d",u);
      printf("\nUkupno slovo A:%d",n);
      printf("\nU procentima:%.2f%\n",p);
      getch();
}