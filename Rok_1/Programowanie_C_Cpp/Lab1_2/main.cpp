#include <iostream>

/*
    Napisz klase ktora zawiera 3 pola prywatne bedace trzema tablicami typu int
    Zaimplementowaæ metode dodawania dwoch tablic do trzeciej
    Zaimplementowaæ metode wypisywania trzeciej tablicy
*/

class tablice{
    int tab1[10] = {2,4,2,7,3,7,3,8,9,2};
    int tab2[10] = {3,8,2,7,3,7,3,7,3,9};
    int tab3[10] = {0};
    public:
    void sumuj();
    void wyswietl();
};

void tablice::sumuj(){
    for(int i=0;i<10;i++){
        tab3[i]=tab1[i]+tab2[i];
    }
}

void tablice::wyswietl(){

    for(int i=0;i<10;i++){
        std::cout << tab3[i] << " ";
    }
}

int main()
{
    tablice pierwsza;
    pierwsza.sumuj();
    pierwsza.wyswietl();
    return 0;
}
