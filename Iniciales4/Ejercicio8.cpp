//Leer un número entero de dos dígitos y determinar si sus dos dígitos son primos.

#include <iostream>
using namespace std;

//Prototipo de función
void funcion (int, int, int*);
bool esPrimo(int);

main(){
	int n, contador = 0, suma = 0;
	do{
		cout << "Introduce un numero de 2 digitos: ";
		cin >> n;
		funcion(n, 0, &contador);
		contador -= 1;
		if (esPrimo(contador) && esPrimo(n - (contador*10))){
			cout << "Ambos digitos son primos" << endl;
		} else {
			cout << "Ambos digitos NO son primos" << endl;
		}
		contador = 0, suma = 0;
	} while (n > 9 && n < 100);
}

void funcion (int n, int i, int* contador){ // forma complicada
	if (i > n){
		return;
	}
	(*contador)++;
	return funcion (n, i + 10, contador);
}

bool esPrimo(int n) {
    if (n < 2) {
        return false; 
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}
