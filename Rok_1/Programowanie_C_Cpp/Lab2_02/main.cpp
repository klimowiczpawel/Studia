// punkty na p≥aszczyünie [x,y]
#include <iostream>
using namespace std;

class Punkt    // klasa - nowy typ
{
private:
    float x;    // atrybuty klasy
    float y;
public:
    void init(){ // metoda klasy
        x = y = 0.0f;
    }
    void setY(float w){  y = w; }
    void wypisz(){
        cout << "Punkt: [" << x << "," << y << "]" << endl;
    }
};

int main()
{
    Punkt a, b;
    a.init();
    b.init();

    a.setY(5.0f);
    a.wypisz();
    b.wypisz();

    //a.x = 3.0f;

    return 0;
}
