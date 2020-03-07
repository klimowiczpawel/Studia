#include <iostream>
using namespace std;

int main()
{
	// 1. Wczytujemy liczbê N (powtarzamy, a¿ N > 0)
	int n;
    do{
		cout << "Podaj N: ";
		cin >> n;
	}while( n <= 0);

	// 2. Wypisujemy kolejne liczby nieparzyste (od 1) mniejsze od N
	for(int i = 0; i < n; i++)
		if( i %2 == 1)
			cout << i << " ";
	cout << endl;

	for(int i = 1; i < n; i+=2)
		cout << i << " ";
	cout << endl;

	for(int i = 0; i < n/2; i++)
		cout << (2*i+1) << " ";
	cout << endl;

	// 3. Wypisujemy to samo, ale od koñca
	for(int i = n-1; i >= 0; i--)
		if( i %2 == 1)
			cout << i << " ";
	cout << endl;

	for(int i = 2*((n+1)/2)-1; i > 0; i-=2)
		cout << i << " ";
	cout << endl;

	for(int i = (n/2)-1; i >= 0; i--)
		cout << (2*i+1) << " ";
	cout << endl;

	return 0;
}

