/* 
 *Pawel Klimowicz
 *16.01.2020
 */
#include<stdio.h>
#include<stdlib.h>

void pominZduplikowane(char tabChar[]);

int main(int argc, char *argv[]){
  if(argc==2)
    pominZduplikowane(argv[1]);
  return EXIT_SUCCESS;
}

void pominZduplikowane(char tabChar[]){
  FILE *plik;
  if((plik=fopen(tabChar,"r"))!=NULL){
    int poprzedniZnak,obecnyZnak,slow=0;
    poprzedniZnak=getc(plik);
    while(poprzedniZnak!=EOF){
      obecnyZnak=getc(plik);
      if(poprzedniZnak!=obecnyZnak){
        printf("%c",poprzedniZnak);
	if(poprzedniZnak==32 || poprzedniZnak==10){
	  slow++;
	}
	poprzedniZnak=obecnyZnak;
      }
    }
    printf("\n\nW tekscie jest %d slow.\n\n",slow);
  }else{
    printf("Blad przy otwieraniu pliku.");
  }  
}
