
main(){
      long s=0,n=1;

      s+=n;
      while(s<1000000000l){
	n++;
	s+=n;
      }
      printf("\nIzvrseno je sabiranje n=%ld vrednosti\n",n);
      printf("i dobijen je zbir s= %ld \n",s);
      getch();
}