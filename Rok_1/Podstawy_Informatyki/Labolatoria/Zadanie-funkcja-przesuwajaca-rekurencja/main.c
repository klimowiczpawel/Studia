#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(int tab[], int ile);
void uzupelnij(int tab[], int ile);
void drukuj(int tab[], int ile);
void przesunwprawo(int tab[], int ile, int oile);
void przesunwlewo(int tab[], int ile, int oile);
void rotujwprawo(int tab[], int ile, int oile);
void rotujwlewo(int tab[], int ile, int oile);

int main()
{
    int ileTab;
    do{
        printf("Na ilo elementowej tablicy chcesz pracowac: ");
        scanf("%d",&ileTab);
    }while(ileTab<2);
    int tablica[ileTab];
    uzupelnij(tablica,ileTab);
    printf("Co chcesz robic:\n");
    menu(tablica,ileTab);
    return 0;
}

void menu(int tab[], int ile){
    char opcja;
    int oile;
    printf("1 Przesun w prawo\n2 Przesun w lewo\n3 Rotacja w prawo\n4 Rotacja w lewo\nK Koniec\nWybierz opcje: ");
    scanf("%s",&opcja);
    switch (opcja){
    case '1':
        // Przesun w prawo
        printf("O ile chcesz dokonac przesuniecia w prawo: ");
        scanf("%d",&oile);
        system("cls");
        printf("Funkcja przed i po wykonaniu funkcji:\n");
        drukuj(tab,ile);
        przesunwprawo(tab,ile,oile);
        break;
    case '2':
        // Przesun w lewo
        printf("O ile chcesz dokonac przesuniecia w lewo: ");
        scanf("%d",&oile);
        system("cls");
        printf("Funkcja przed i po wykonaniu funkcji:\n");
        drukuj(tab,ile);
        przesunwlewo(tab,ile,oile);
        break;
    case '3':
        // Rotacja w prawo
        printf("O ile chcesz dokonac rotacji w prawo: ");
        scanf("%d",&oile);
        system("cls");
        printf("Funkcja przed i po wykonaniu funkcji:\n");
        drukuj(tab,ile);
        rotujwprawo(tab,ile,oile);
        break;
    case '4':
        // Rotacja w lewo
        printf("O ile chcesz dokonac rotacji w lewo: ");
        scanf("%d",&oile);
        system("cls");
        printf("Funkcja przed i po wykonaniu funkcji:\n");
        drukuj(tab,ile);
        rotujwlewo(tab,ile,oile);
        break;
    case 'K':
        // Koniec
        exit (EXIT_SUCCESS);
        break;
    default:
        // Bledna wartosc
        system("cls");
        printf("Podales bledna opcje. Wczytaj jeszcze raz.\n");
        menu(tab,ile);
        break;
    }
    drukuj(tab,ile);
    printf("\n\nDokonales pierwszych zmian na tablicy. Co chcesz dalej robic?\n");
    menu(tab,ile);
}

void uzupelnij(int tab[], int ile){
    srand(time(NULL));
    for(int i=0;i<ile;i++){
        tab[i]=rand()%101;
    }
}

void drukuj(int tab[], int ile){
    int i;
    printf("tab[] = {");
    for(i=0;i<ile-1;i++){
        if(tab[i]<10)
            printf("00%d,",tab[i]);
        else if(tab[i]<100)
            printf("0%d,",tab[i]);
        else
            printf("%d,",tab[i]);
    }
    if(tab[i]<10)
        printf("00%d}\n",tab[i]);
    else if(tab[i]<100)
        printf("0%d}\n",tab[i]);
    else
        printf("%d}\n",tab[i]);
}

void przesunwprawo(int tab[], int ile, int oile){
    for(int i=ile-1;i>0;i--)
        tab[i]=tab[i-1];
    tab[0]=0;
    oile--;
    if(oile)
        przesunwprawo(tab,ile,oile);
}
void przesunwlewo(int tab[], int ile, int oile){
    for(int i=0;i<ile-1;i++)
        tab[i]=tab[i+1];
    ile--;
    tab[ile]=0;
    oile--;
    if(oile&&ile>0)
        przesunwlewo(tab,ile,oile);
}
void rotujwprawo(int tab[], int ile, int oile){
    int pamiec = tab[ile-1];
    for(int i=ile;i>0;--i)
        tab[i]=tab[i-1];
    tab[0]=pamiec;
    oile--;
    if(oile)
        rotujwprawo(tab,ile,oile);
}
void rotujwlewo(int tab[], int ile, int oile){
    int pamiec = tab[0];
    for(int i=0;i<ile-1;i++)
        tab[i]=tab[i+1];
    tab[ile-1]=pamiec;
    oile--;
    if(oile)
        rotujwlewo(tab,ile,oile);
}
