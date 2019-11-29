#include <stdio.h>
#include <stdlib.h>

float sredniazx();

int main()
{
    int ile,i;
    float wynik;
    printf("Z ilu liczb chcesz policzys srednia: ");
    scanf("%d",&ile);
    int tab[ile];
    for(i=0;i<ile;i++){
        printf("Podaj liczbe %d: ",i+1);
        scanf("%d",&tab[i]);
    }
    wynik = sredniazx(ile,&tab);
    printf("%.2f",wynik);
    return 0;
}

float sredniazx(int ilosc, int *wskaznik){
    float srednia=0,suma=0;
    int i;
    for(i=0;i<ilosc;i++){
        suma+=wskaznik[i];
    }
    srednia=suma/ilosc;
    return srednia;
}
