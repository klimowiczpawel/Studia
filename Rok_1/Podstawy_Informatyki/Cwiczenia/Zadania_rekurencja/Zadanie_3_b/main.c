#include <stdio.h>
#include <stdlib.h>

void doJeden(int liczba);

int main()
{
/*
    Napisz funkcjê rekurencyjn¹, która wyœwietli liczby
    ca³kowite od 1 do n.
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
        doJeden(liczba-1);
        printf(" %d",liczba);
    }else{
        doJeden(liczba+1);
        printf(" %d",liczba);
    }
}
