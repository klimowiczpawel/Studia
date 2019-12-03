#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int czypierwsza();
int liczbalosowa();

int main()
{
/*
    Zadanie 14

    Napisz program zawierający funkcję, która rozpoznaje czy liczba(parametr funkcji) jest
    pierwsza (zwraca 1 jeżeli jest i 0 jeżeli nie). W programie głównym tworzy tablicę 50
    elementową liczb całkowitych wygenerowaną losowo oraz zapisuje liczby pierwsze z tej
    tablicy do wskazanego przy uruchomieniu pliku (argument programu).
*/
    int tablicaliczblosowych[50],i;
    FILE *plik;
    srand(time(NULL));
    for(i=0;i<50;i++){

        tablicaliczblosowych[i]=rand();
        printf("tab[%d] = %d\n",i,tablicaliczblosowych[i]);
    }
    if((plik=fopen("pierwsze.txt","w"))==NULL){
        printf("Blad otwierania pliku w trybie zapisu!\n");
        exit(1);
    }
    fprintf(plik,"Liczby pierwsze:\n");
    for(i=0;i<50;i++){
        if((czypierwsza(tablicaliczblosowych[i])==1)){
            fprintf(plik,"%d, ",tablicaliczblosowych[i]);
        }
    }
    fprintf(plik,"\n");
    fclose(plik);
    return 0;
}

int czypierwsza(int liczba){
    int i;
    if(liczba<2)
        return 0;
    for(i=2;i*i<=liczba;i++)
        if(liczba%i==0)
            return 0;
    return 1;
}
