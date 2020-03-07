#include <iostream>
using namespace std;

class Ulamek
{
 	int licznik, mianownik;
public:
	Ulamek(){
		licznik = 0;
		mianownik = 1;
	}

	Ulamek(int _licznik, int mianownik){
		licznik = _licznik;
		this->mianownik = mianownik;
	}

    void zmien(int _licznik, int mianownik){
        licznik = _licznik;
		this->mianownik = mianownik;
    }

    void zmien(float _licznik, float mianownik); // Mog¹ mieæ po tyle samo argumentów ale ró¿niæ siê typami danych wejœciowych

	void wypisz(){
		cout << "ulamek = " << licznik << "/" << mianownik << endl;
	}

	float rzeczywista();
};

float Ulamek::rzeczywista() {
    return (float)licznik / (float)mianownik;
}

int main()
{
	Ulamek a; // -> domyœlnie: 0 (0/1)
	Ulamek b(1, 2);	// -> 1/2
	a.wypisz();	// -> 0/1
	a.zmien(3, 5);
	a.wypisz();	// -> 3/5
	b.wypisz();	// -> 1/2

	float w = a.rzeczywista();
	cout << w << endl;	// -> 0.6

	return 0;
}
