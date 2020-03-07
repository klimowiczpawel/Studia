// punkty na p≥aszczyünie [x,y]
#include <iostream>
using namespace std;

struct Punkt    // struktura - nowy typ
{
    float x;    // pola struktury
    float y;
};

void init(Punkt& p){ //
    p.x = p.y = 0.0f;
}
void setY(Punkt& p, float w){  p.y = w; }

void wypisz(Punkt p){
    cout << "Punkt: [" << p.x << "," << p.y << "]" << endl;
}

int main()
{
    Punkt a, b;
    init(a);
    init(b);

    setY(a,5.0f);
    wypisz(a);
    wypisz(b);

    //a.x = 3.0f;

    return 0;
}
