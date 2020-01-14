#include <stdio.h>
#include <stdlib.h>

double horner(double *tab, double wartosc, int i);

int main(int argc, char *argv[])
{
/*
    Napisz funkcjê rekurencyjn¹ która obliczy wartoœæ wielomianu wykorzystuj¹c algorytm Hornera
*/
    int stopien;
    printf("Podaj stopien wielomianu: ");
    scanf("%d",&stopien);
    double tablica[stopien],liczba;
    for(int i=0;i<stopien;i++){
        printf("Podaj a(%d)",i);
        scanf("%lf",&tablica[i]);
    }
    printf("Podaj liczbe: ");
    scanf("%lf",&liczba);
    printf("Wartosc funkcji dla %lf wynosi %lf",liczba,horner(tablica,liczba,stopien));
    return 0;
}

double horner(double *tab, double wartosc, int i){
    if(i==0){
        return tab[0];
    }else{
        return tab[i]+wartosc*(horner(tab,wartosc,i-1));
    }
}
