#include <stdio.h>
#include <stdlib.h>

void odJeden(int i, int liczba);

int main()
{
/*
    Napisz funkcję rekurencyjną, która wyświetli liczby
    całkowite od 1 do n.
*/
    int liczba;
    printf("Wyswietlanie liczb do 1.\nPodaj liczbe: ");
    scanf("%d",&liczba);
    odJeden(1,liczba);
    return 0;
}

void odJeden(int i, int liczba){
    printf(" %d",i);
    if(i>liczba){
        odJeden(--i,liczba);
    }else if(i<liczba){
        odJeden(++i,liczba);
    }
}
