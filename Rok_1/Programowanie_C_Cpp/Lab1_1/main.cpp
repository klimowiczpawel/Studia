#include <iostream>

//using namespace std;

/*
    | - alternatywa bitowa
    || - alternatywa logiczna
    & - koniunkcja bitowa
    && - koniunkcja logiczna
    ^ - xor (dwa przeciwne)
    ! - zaprzecznie logiczne
    ~ - zaprzeczenie binarne
    % - modulo
    public: - zakres publiczny (mozna z zewnatrz wyslac dane)
    private: - zakres prywatny (nie mozna z zewnatrz wyslac danej)
    protetcted: -
*/

struct StrukturaTestowa{ // domyslnie wszystkie public
// public:
    int pierwszaZmienna = 6; // w C++ mozna dac domyslna wartosc
    int drugaZmienna = 2;
    void funkcja();
};

void KlasaTestowa::funkcja(){

}

class KlasaTestowa{ // domyslnie wszystkie private
// private:
    int pierwszaZmienna = 5; // w C++ mozna dac domyslna wartosc
// public:  // mozna dac czesc publicznych i czesc prywatnych
    int drugaZmienna = 4;
};

int main()
{
    int a = 55;
    a = a << 1; // Przesuniecie binarne
    std::cout << a << std::endl;
    a = a >> 1; // Przesuniecie binarne
    std::cout << a << std::endl;
    std::cout << "Podaj nowe a: ";
    std::cin >> a;
    std::cout << "Nowe a to: " << a << std::endl;
    return 0;
}
