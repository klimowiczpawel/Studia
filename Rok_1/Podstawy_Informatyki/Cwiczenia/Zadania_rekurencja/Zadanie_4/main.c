#include <stdio.h>
#include <stdlib.h>

void choinka(int przebieg, int wierszy);

void noga(int wierszy);

int main()
{
/*
    Napisz funkcję rekurencyjną, która wyświetla choinkę o
    wysokości n (gwiazdkami).
*/
    int ile, przebieg=0;
    printf("Na ile wierszy narysowac choinke? : ");
    scanf("%d",&ile);
    printf("\n\n");
    choinka(przebieg,ile);
    return 0;
}

void choinka(int przebieg, int wierszy){
    for(int i=0;i<wierszy-przebieg;i++){
        printf(" ");
    }
    for(int i=0;i<przebieg*2+1;i++){
        printf("*");
    }
    printf("\n");
    przebieg++;
    if(przebieg<wierszy){
        choinka(przebieg,wierszy);
    }else{
        noga(wierszy);
    }
}

void noga(int wierszy){
    int grubosc = 1;
    int spacji = wierszy - grubosc;
    if(wierszy>6){
        grubosc=grubosc+2;
    }else{
        spacji++;
    }
    for(int rzad=0;rzad<2;rzad++){
        for(int i=0;i<spacji;i++){
            printf(" ");
        }
        for(int i=0;i<grubosc;i++){
            printf("*");
        }
        printf("\n");
    }
}
