#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumapodzienych(int *tab, int ile);

int main(int argc, char *argv[])
{
/*
    Zadanie 10

    Napisz program zawieraj�cy funkcj�, kt�ra oblicza sum� liczb podzielnych przez 11 w 30
    elementowej tablicy liczb ca�kowitych. Elementy tablicy powinny by� wygenerowane
    losowo w programie g��wnym(oraz wy�wietlone na monitorze), a nast�pnie zapisane we
    wskazanym przy uruchomieniu pliku (argument programu) razem z wynikiem zwr�conym
    przez funkcj�.
*/
    if(argc==2){
        int ile=30,tablicaliczblosowych[ile],i,suma;
        FILE *plik;
        srand(time(NULL));
        for(i=0;i<ile;i++){
            tablicaliczblosowych[i]=rand()%101;
        }
        if((plik=fopen(argv[1],"w"))==NULL){
            printf("Blad otwierania pliku w trybie zapisu!\n");
            exit(1);
        }
        printf("tablica[] = {");
        fprintf(plik,"tablica[] = {");
        for(i=0;i<ile;i++){
            if(i!=ile-1){
                printf("%d, ",tablicaliczblosowych[i]);
                fprintf(plik,"%d, ",tablicaliczblosowych[i]);
            }else{
                printf("%d}\n",tablicaliczblosowych[i]);
                fprintf(plik,"%d}\n",tablicaliczblosowych[i]);
            }
        }
        suma = sumapodzienych(tablicaliczblosowych,ile);
        printf("Suma liczb podzielnych przez 11 wynosi: %d",suma);
        fprintf(plik,"Suma liczb podzielnych przez 11 wynosi: %d",suma);
        fclose(plik);
    }else{
        printf("Podano bledne argumenty przy otwieraniu pliku.");
    }
    return 0;
}

int sumapodzienych(int *tab, int ile){
    int suma=0;
    for(int i=0;i<ile;i++){
        if(tab[i]%11==0)
            suma+=tab[i];
    }
    return suma;
}
