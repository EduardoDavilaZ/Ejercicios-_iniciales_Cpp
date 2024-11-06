//Leer dos números enteros y determinar si la diferencia entre los dos es un número primo.
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	int a, b;
	cout << "Introduce un numero: "; cin >> a;
	cout << "Introduce otro numero: "; cin >> b;
	esPrimo(a-b);
	esPrimo(a-b) == true ? cout << "Es primo" : cout << "No es primo";
}

bool esPrimo(int n){
	if (n == 0 || n == 1){
		return false;
	}
	int i = 2;
	while (i < n && n % i != 0){
		i++;
	}
	return i == n ? true : false;
}