#include <stdio.h>
#include <stdlib.h>

void doJeden(int liczba);

int main()
{
/*
    Napisz funkcję rekurencyjną, która wyœwietli liczby
    całkowite od n do 1.
*/
    int liczba;
    printf("Wypisywanie liczb do 1. Podaj liczbe: ");
    scanf("%d",&liczba);
    doJeden(liczba);
    return 0;
}

void doJeden(int liczba){
    if(liczba==1){
        printf(" 1");
    }else if(liczba>1){
        printf(" %d",liczba--);
        doJeden(liczba);
    }else{
        printf(" %d",liczba++);
        doJeden(liczba);
    }
}
