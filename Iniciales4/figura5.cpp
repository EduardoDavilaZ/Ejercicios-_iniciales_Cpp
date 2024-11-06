#include <iostream>
using namespace std;
//Autor: Sr. Eduardo Davila Z.
//Escudo atletico madrid
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	cout << endl;
	int p = n * 30 / 100;
	for (int i=0; i<=n-1 + n/4; i++){
		for (int j=0; j<=(n*2)-1 - p; j++){
			int anxo = (n*2) - 1 - p;
			if (i == 0 && j % 2 == 0		 || i < n -p && (j == 0 || j == (n*2)-1-p) 		|| 		(j + p*5 == i*2 -2 || j - p*5  == anxo - i*2+2) || 			j > anxo - i*2 - j && j % 9 == 0 && i*2 > anxo - j	&& i * 2 < j + p*5	&& anxo - i * 2 > j - p*5		 ) { // contorno y columnas
				cout << "+";
			} else if (j  == anxo - i*2	) { // diagonal
				cout << "/";
			} else if (i == n/7 && j % 8 == 0 || i < n - p && j == n/4 && i % 4 == 0 || j + n/4 == anxo - i*2 && i % 4 == 0) { // estrellas (v/h)
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}