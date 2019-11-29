#include <stdio.h>
#include <stdlib.h>

int srednia();

int main()
{
    int liczba1, liczba2, wynik;
    printf("Podaj a: ");
    scanf("%d",&liczba1);
    printf("Podaj b: ");
    scanf("%d",&liczba2);
    wynik = srednia(liczba1,liczba2);
    printf("Srednia liczb %d i %d to: %d", liczba1, liczba2, wynik);
    return 0;
}

int srednia(int a, int b){
    return (a+b)/2;
}
