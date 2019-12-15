#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double filoczyn(int *tab, int ile);

int main(int argc, char *argv[])
{
/*
    Zadanie 13

    Napisz program zawieraj�cy funkcj�, kt�ra oblicza iloczyn liczb dodatnich,
    nieparzystych w 50 elementowej tablicy liczb ca�kowitych. Elementy tablicy powinny by�
    wygenerowane losowo w programie g��wnym(oraz wy�wietlone na monitorze), a nast�pnie
    zapisane we wskazanym przy uruchomieniu pliku (argument programu) razem z wynikiem
    zwr�conym przez funkcj�.
*/
    if(argc==2){
        int ile=50,tablicaliczblosowych[ile],i;
        double iloczyn;
        FILE *plik;
        srand(time(NULL));
        for(i=0;i<ile;i++){
            tablicaliczblosowych[i]=(rand()%21)-10;
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
        iloczyn = filoczyn(tablicaliczblosowych,ile);
        printf("Iloczyn dodatnich nieparzystych z tablicy to: %.0f",iloczyn);
        fprintf(plik,"Iloczyn dodatnich nieparzystych z tablicy to: %.0f",iloczyn);
        fclose(plik);
    }else{
        printf("Podano bledne argumenty przy otwieraniu pliku.");
    }
    return 0;
}

double filoczyn(int *tab, int ile){
    double iloczyn=0;
    for(int i=0;i<ile;i++){
        if(tab[i]>0 && tab[i]%2)
            if(iloczyn){
                iloczyn = iloczyn*tab[i];
            }else{
                iloczyn = tab[i];
            }
    }
    return iloczyn;
}
