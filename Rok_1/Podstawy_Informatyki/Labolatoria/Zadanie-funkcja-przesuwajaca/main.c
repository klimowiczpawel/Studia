/*
 * Pawel Klimowicz
 * 23.11.2019
 * Zadanie z przesuwania / rotacji tablicy
*/

#include <stdio.h>
#include <stdlib.h>

void wyswietltablice();
void przesuwanieirotacja();

int main()
{
    int tablica[]={100,110,120,130,140,150,160,170,180,190,200};
    int ile = sizeof tablica / sizeof *tablica;
    przesuwanieirotacja(tablica,ile);
    return 0;
}

void wyswietltablice(int *tablica, int ile){
    int i;
    printf("tablica[] = {");
    for(i=0;i<ile;i++){
        if(abs(tablica[i])<10)
            printf("00%d",tablica[i]);
        else if(abs(tablica[i]<100))
            printf("0%d",tablica[i]);
        else
            printf("%d",tablica[i]);
        if(i<ile-1)
            printf(",",tablica[i]);
    }
    printf("}",tablica[i]);
}

void przesuwanieirotacja(int *tablica, int ile){
    int wybor,oile,i;
    do{
        system("cls"); // W linuxie ustawiamy system("clear");
        printf("Program przesuwajacy i rotujacy tablice.\nWybierz opcje:\n");
        printf("1 Przesuniecie w prawo\n2 Przesuniecie w lewo\n3 Rotacja w prawo\n4 Rotacja w lewo\n0 Koniec\n");
        scanf("%d",&wybor);
    }while(wybor<0 || wybor>4);
    if(wybor==0){
        exit(0);
    }
    printf("O ile pozycji chcesz dokonac przesuniecia/rotacji?\nPodana liczba powinna byc wieksza od 0 i mniejsza od %d: ",ile);
    scanf("%d",&oile);
    printf("\n\n");
    if(oile<=0 || oile>=ile){
        printf("Podales liczbe ktora wykracza poza dopuszczalny zakres!\n");
        system("pause");
        exit(0);
    }
    wyswietltablice(tablica,ile);
    printf(" - poczatkowa wartosc tablicy\n");
    int pamiec[oile],j=0;
    switch (wybor){
    case 1:
        // Przesuniecie w prawo
        for(i=ile-1;i>=0;i--){
            if(i>oile-1){
                tablica[i]=tablica[i-oile];
            }else{
                tablica[i]=0;
            }
        }
        break;
    case 2:
        // Przesuniecie w lewo
        for(i=0;i<ile;i++){
            if(i<ile-oile){
                tablica[i]=tablica[i+oile];
            }else{
                tablica[i]=0;
            }
        }
        break;
    case 3:
        // Rotacja w prawo
        for(i=0;i<oile;i++){
            pamiec[i]=tablica[ile-oile+i];
        }
        for(i=ile-1;i>oile-1;i--){
            tablica[i]=tablica[i-oile];
        }
        for(i=0;i<oile;i++){
            tablica[i]=pamiec[i];
        }
        break;
    case 4:
        // Rotacja w lewo
        for(i=0;i<oile;i++){
            pamiec[i]=tablica[i];
        }
        for(i=0;i<ile;i++){
            if(i<ile-oile){
                tablica[i]=tablica[i+oile];
            }else{
                tablica[i]=pamiec[j];
                j++;
            }
        }
        break;
    }
    wyswietltablice(tablica,ile);
    printf(" - koncowa wartosc tablicy\n");
}
