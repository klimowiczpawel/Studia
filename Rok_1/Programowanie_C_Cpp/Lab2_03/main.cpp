#include <iostream>
using namespace std;

class Punkt	// klasa (deklaracja)
{
//private:
	float x, y;	// atrybuty
public:
	Punkt() { // konstruktor bezparametrowy
		cout << "Konstruktor Punkt" << endl;
		x = y = 0.0f;
	}

	Punkt(float _x, float y) {	// konstruktor dwuparametrowy
		cout << "Konstruktor Punkt(x,y)" << endl;
		x = _x;
		this->y = y; // Punkt::y = y;

	}

	void zmienX( float nowy_x) { x = nowy_x; }
	void wypisz()	// metoda
	{
		cout << "x = " << x << ", y = " << y << endl;
	}
};


int main()
{
	Punkt a; // obiekt a typu klasowego Punkt
	Punkt b(2.0, 3.0);

	//a.x = 5.0f;
	a.zmienX(5.0f);

	//cout << a.y << endl;

	a.wypisz(); // u¿ycie metody wypisz() na rzecz obiektu a
	b.wypisz(); //

	return 0;
}

