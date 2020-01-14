#include <stdio.h>
#include <stdlib.h>

void nZnakow(int n);
void wczytaj();

int main()
{
/*
    Napisz funkcję rekurencyjną, która wypisze na ekranie n
    znaków.
*/
    int znakow;
    printf("Ile znakow chcesz wypisac na ekranie?: ");
    scanf("%d",&znakow);
    if(znakow>0){
        nZnakow(znakow);
    }else{
        wczytaj();
    }
    return 0;
}

    int znakow;
void wczytaj(){
    int znakow;
    system("cls");
    printf("Podaj wartosc wieksza od 0.\nIle znakow chcesz wypisac na ekranie?: ");
    scanf("%d",&znakow);
    if(znakow>0){
        nZnakow(znakow);
    }else{
        wczytaj();
    }
}

void nZnakow(int n){
    printf("*");
    if(--n){
        nZnakow(n);
    }
}
