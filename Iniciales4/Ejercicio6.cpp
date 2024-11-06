//Leer un número entero de dos dígitos menor que 20 y determinar si es primo. 

#include <iostream>
using namespace std;

//Prototipo de función
bool esPrimo (int);

main(){
	int n;
	do{
		cout << "Introduce un numero: ";
		cin >> n;
		if (esPrimo(n)){
			cout << "Es primo";
		} else {
			cout << "No es primo";
		}
		n = 0;
	} while (n > 9 && n < 20);	
}

bool esPrimo(int n) {
    if (n < 2) {
        return false; // los numeros menores a 2 no son primos
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false; // buscar divisores
        }
    }
    return true; // en caso de no encontrar ningún divisor, es primo
}
