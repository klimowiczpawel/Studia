#include <stdio.h>
#include <stdlib.h>

int sumapodzielnych13(int tab[], int ile);

int main(int argc, char *argv[])
{
/*
    Zadanie 7
    Napisz program zawieraj�cy funkcj�, kt�ra oblicza sum� liczb podzielnych przez 13 w 20
    elementowej tablicy liczb ca�kowitych. Elementy tablicy powinny by� wczytywane w
    programie g��wnym ze wskazanego przy uruchomieniu pliku (argument programu). W
    programie g��wnym wy�wietli� na monitorze tablic� 20-elementow� oraz wynik funkcji.
*/
FILE *plik;
    int i,ile=20,tab[ile],wynik;
    if(argc==2){
        if((plik=fopen(argv[1],"r"))!=NULL){
            for(i=0;i<ile;i++){
                if(fscanf(plik,"%d",&tab[i])==-1){
                    printf("Za malo argumentow w pliku %s",argv[1]);
                    break;
                }
            }
            if(i==ile){
                printf("tab[]={");
                for(i=0;i<ile;i++){
                    if(i!=ile-1)
                        printf("%d,",tab[i]);
                    else
                        printf("%d}\n",tab[i]);
                }
                printf("Suma liczb podzielnych przez 13 wymosi: %d",sumapodzielnych13(tab,ile));
            }
        }else{
            printf("Wystapil blad przy otwieraniu pliku: \"%s\"\n",argv[1]);
        }
    }else{
        printf("Podano bledne argumenty przy otwieraniu pliku.");
    }
    return 0;
}

int sumapodzielnych13(int tab[], int ile){
    int suma = 0;
    for(int i=0;i<ile;i++){
        if((tab[i]%13)==0){
            suma += tab[i];
        }
    }
    printf("\n");
    return suma;
}
