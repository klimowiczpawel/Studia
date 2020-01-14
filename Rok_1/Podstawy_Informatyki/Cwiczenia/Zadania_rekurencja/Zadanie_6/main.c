#include <stdio.h>
#include <stdlib.h>

void NWD(int a, int b);

int main()
{
/*
    Napisz funkcj� rekurencyjn�, kt�ra znajduje najwi�kszy
    wsp�lny dzielnik 2 liczb ca�kowitych dodatnich
    (wykorzysta� algorytm Euklidesa).
*/
    int pierwsza,druga;
    printf("Witaj w programie obliczajacym NWD\nPodaj pierwsza liczbe wieksza od 0: ");
    scanf("%d",&pierwsza);
    printf("Podaj druga liczbe wieksza od 0: ");
    scanf("%d",&druga);
    if(pierwsza>0 && druga>0){
        if(pierwsza>druga){
            NWD(pierwsza,druga);
        }else{
            NWD(druga,pierwsza);
        }
    }else{
        printf("Podano liczby mniejsze od 0");
    }
    return 0;
}

void NWD(int a, int b){
    int reszta;
    reszta=a%b;
    if(reszta!=0){
        NWD(b,reszta);
    }else{
        printf("Najwiekszy wspolny dzielnik to: %d",b);
    }
}
