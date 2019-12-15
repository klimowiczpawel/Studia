#include <stdio.h>
#include <stdlib.h>

int iloczyn(int tab[], int ile);

int main(int argc, char *argv[])
{
/*
    Zadanie 8

    Napisz program zawieraj�cy funkcj�, kt�ra oblicza iloczyn liczb dodatnich, nieparzystych
    w 20 elementowej tablicy liczb ca�kowitych. Elementy tablicy powinny by� wczytywane w
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
                printf("Iloczyn liczb dodadnich nieparzystych wynosi: %d",iloczyn(tab,ile));
            }
        }else{
            printf("Wystapil blad przy otwieraniu pliku: \"%s\"\n",argv[1]);
        }
    }else{
        printf("Podano bledne argumenty przy otwieraniu pliku.");
    }
    return 0;
}

int iloczyn(int tab[], int ile){
    int wynik = 0;
    for(int i=0;i<ile;i++){
        if(tab[i]>0 && tab[i]%2!=0){
            if(wynik==0)
                wynik = tab[i];
            else
                wynik *= tab[i];
        }
    }
    return wynik;
}
