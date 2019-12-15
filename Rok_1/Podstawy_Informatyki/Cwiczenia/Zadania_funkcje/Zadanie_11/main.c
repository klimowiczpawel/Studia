#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int najmniejszadodatnia(int *tab, int ile);

int main(int argc, char *argv[])
{
/*
    Zadanie 11

    Napisz program zawieraj�cy funkcj�, kt�ra znajduje (pierwsz�) najmniejsz� liczb�
    dodatni� w 50 elementowej tablicy liczb ca�kowitych. Elementy tablicy powinny by�
    wygenerowane losowo w programie g��wnym(oraz wy�wietlone na monitorze), a nast�pnie
    zapisane we wskazanym przy uruchomieniu pliku (argument programu) razem z wynikiem
    zwr�conym przez funkcj�.
*/
    if(argc==2){
        int ile=50,tablicaliczblosowych[ile],i,najmniejsza;
        FILE *plik;
        srand(time(NULL));
        for(i=0;i<ile;i++){
            tablicaliczblosowych[i]=(rand()%201)-100;
        }
        if((plik=fopen(argv[1],"w"))==NULL){
            printf("Blad otwierania pliku w trybie zapisu!\n");
            exit(1);
        }
        printf("tablica[] = {");
        fprintf(plik,"tablica[] = {");
        for(i=0;i<ile;i++){
            if(i!=ile-1){
                printf("%d,",tablicaliczblosowych[i]);
                fprintf(plik,"%d,",tablicaliczblosowych[i]);
            }else{
                printf("%d}\n",tablicaliczblosowych[i]);
                fprintf(plik,"%d}\n",tablicaliczblosowych[i]);
            }
        }
        najmniejsza = najmniejszadodatnia(tablicaliczblosowych,ile);
        printf("Najmniejsza dodatnia z tablicy to: %d",najmniejsza);
        fprintf(plik,"Najmniejsza dodatnia z tablicy to: %d",najmniejsza);
        fclose(plik);
    }else{
        printf("Podano bledne argumenty przy otwieraniu pliku.");
    }
    return 0;
}

int najmniejszadodatnia(int *tab, int ile){
    int najmniejsza=0;
    for(int i=0;i<ile;i++){
        if(tab[i]>0 && (tab[i]<najmniejsza || najmniejsza==0))
            najmniejsza=tab[i];
    }
    return najmniejsza;
}
