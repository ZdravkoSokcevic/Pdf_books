#include <stdio.h>
#include <conio.h>
struct licnost{
      char ime [35];
      char adresa [50];
      unsigned dan;
      unsigned mes;
      unsigned god;
};

void citaj(struct licnost *o){
     printf("Unesite ime osobe:");
     gets(o->ime);
     printf("Unesite adresu osobe:");
     gets(o->adresa);
     printf("Unesite datum rodjenja osobe (dd.mm.yyyy):");
     scanf("%u.%u.%u",&o->dan,&o->mes,&o->god);
     while(getchar()!='\n');
}
main(){
      struct licnost osoba[50];
      int i,n,h;

      clrscr();
	  printf("Unesite broj osoba: ");
      scanf("%d",&n);
      while(getchar()!='\n');

      for(i=0;i<n;i++){
	 printf("Unesi podatke za %d. osobu:\n",i+1);
	 citaj(&osoba[i]);
      }
      
	  clrscr();
      printf("Unos podataka je zavrsen...\n");
	  printf("Izaberite hroskopski znak:\n");
	  printf("1. Ovan\n2. Bik\n3. Blizanci\n4. Rak\n5. Lav\n6. Devica\n7. Vaga\n8. Skorpija\n9. Strelac\n10. Jarac\n11. Vodolija\n12. Ribe\n");
      printf("\nUnesite redni broj horoskopskog znaka:");
	  scanf("%d",&h);
	  while(getchar()!='\n');

      printf("\n\nOsobe rodjene u znaku pod rednim brojem %d su:\n\n",h);

      for(i=0;i<n;i++){	  
	 switch(h){
           case 1:
             if(osoba[i].dan>21 && osoba[i].dan<=31 && osoba[i].mes==3 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==4)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
	       case 2:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==4 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==5)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 3:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==5 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==6)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 4:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==6 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==7)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 5:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==7 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==8)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 6:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==8 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==9)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 7:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==9 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==10)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 8:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==10 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==11)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 9:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==11 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==12)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 10:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==12 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==1)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 11:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==1 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==2)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   case 12:
		     if(osoba[i].dan>21 && osoba[i].dan<=30 && osoba[i].mes==2 || osoba[i].dan>=1 && osoba[i].dan<20 && osoba[i].mes==3)
			   printf("%s, %s,\t%u.%u.%u\n",osoba[i].ime,osoba[i].adresa,osoba[i].dan,osoba[i].mes,osoba[i].god);
			   break;
		   default:
		     printf("Greska pri biranju znaka!!!");
			 break;
		}	   
      }
      getch();
}