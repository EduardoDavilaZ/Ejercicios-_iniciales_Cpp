//Leer un número entero y si es menor que 100 determinar si es primo.
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	if (n < 100){
		if (esPrimo(n)== true){
			cout << "Es primo." << endl;
		} else {
			cout << "No es primo" << endl;
		}
	}
}

bool esPrimo(int n){
	if (n < 2){
		return false;
	}
	int i = 2;
	while (i <= n && n % i != 0){
		i++;
	}
	return i==n? true : false;
}