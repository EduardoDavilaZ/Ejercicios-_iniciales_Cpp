//Leer un número entero y si es múltiplo de 4 determinar si su último dígito es primo.
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	if (n % 4 == 0){
		int d = n % 10;
		if (esPrimo(d) == true){
			cout << "Es primo";
		} else {
			cout << "No es primo";
		}
	}
}

bool esPrimo(int n){
	if (n < 2){
		return false;
	}
	int i=2;
	while (i <= n && n % i != 0){
		i++;
	}
	return i==n ? true : false;
}