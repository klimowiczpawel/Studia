/* 
 *Pawel Klimowicz
 *05.01.2022
 */
#include<stdio.h>
#include<stdlib.h>

void wypiszWektor(long int wymiar, int wektAdres[]);
int babel(long int wymiar, int * wektAdres);
void policzSume(long int wymiar, int wektAdres[]);
void mediana(long int wymiar, int wektAdres[]);

int main(int argc, char *argv[]){
  FILE *plik;
  long int wymiar;
  if(argc==2){
    if((plik=fopen(argv[1],"r"))!=NULL){
      // Dzialane programu
      if(fscanf(plik,"%ld",&wymiar)!=-1){
	int wektor[wymiar];
	for(long int i=0;i<wymiar;i++){
	  if(fscanf(plik,"%d",&wektor[i])==-1){
	    printf("Za malo argumentow w pliku %s",argv[1]);
	    break;
	  }
	}
	system("clear");
	printf("Rozmiar wektora = %ld\n",wymiar);
	printf("Wektor przed sortowaniem:\n");
	wypiszWektor(wymiar, wektor);
	printf("\n\nWektor %ld elementowy posortowano w %d interakcjach\n",wymiar,babel(wymiar,wektor));
	wypiszWektor(wymiar, wektor);
	policzSume(wymiar, wektor);
	mediana(wymiar, wektor);
      }else{
	printf("Za malo argumentow w pliku %s",argv[1]);
        //break;
      }
    }else{
      printf("Wystapil blad przy otwieraniu pliku: \"%s\"\n",argv[1]);
    }
  }else{
    printf("Podano bledne argumenty przy otwieraniu pliku.");
  }
  //system("clear");
  //printf("Rozmiar wektora = %ld\n",wymiar);
  //printf("Wektor przed sortowaniem:\n");
  //wypiszWektor(wymiar, wektor);
  //printf("\n\nWektor %ld elementowy posortowano w %d interakcjach",wymiar,babel(wymiar,wektor));
  //wypiszWektor(wymiar, wektor);
  return EXIT_SUCCESS;
}

void wypiszWektor(long int wymiar, int * wektAdres){
  for(int i=0;i<wymiar;i++)
    printf("%4d ", wektAdres[i]);
  printf("\n");
}

int babel(long int wymiar, int wektAdres[]){
  int temp,zmian,iteracji=0;
  for(int j=0;j<wymiar-1;j++){
    zmian = 0;
    for(int i=wymiar-1;i>j;i--){
      if(wektAdres[i]<wektAdres[i-1]){
	temp = wektAdres[i];
	wektAdres[i] = wektAdres[i-1];
	wektAdres[i-1] = temp;
	zmian++;
      }
      iteracji++;
    }
    if(!zmian)
      return iteracji;
  }
  return iteracji;
}

void policzSume(long int wymiar, int wektAdres[]){
  int suma=0;
  for(int i=0;i<wymiar;i++)
     suma += wektAdres[i];
  printf("Suma wektora wynosi %d",suma);
  printf("\n");
}

void mediana(long int wymiar, int wektAdres[]){
  if(wymiar%2){
    printf("Mediana wynosi: %d",wektAdres[wymiar/2]);
  }else{
    printf("Mediana wynosi: %d",(wektAdres[wymiar/2-1]+wektAdres[wymiar/2])/2);
  }
}
