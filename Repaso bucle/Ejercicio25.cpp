//Dado un entero positivo n (> 1), comprobar si es primo.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	int n;
	do {
		cout << "Introduce un numero: ";
		cin >> n;
	} while (n <= 1);
	esPrimo(n) ? cout << n << " es primo. " : cout << n << " no es primo";
} 
bool esPrimo (int x){
	int i = 2;
	while (i < x && x % i != 0){
		i++;
	}
	return i != x ? false : true;
}