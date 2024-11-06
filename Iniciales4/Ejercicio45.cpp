/*Leer un número entero de 2 dígitos y si es par mostrar en pantalla la suma de sus dígitos, si es
primo y menor que 10 mostrar en pantalla su último dígito y si es múltiplo de 5 y menor que 30
mostrar en pantalla el primer dígito.*/
#include <iostream>
using namespace std;

bool esPrimo(int);

int main(){
	int n;
	do {
		cout << "Introduce un numero de 2 digitos: "; cin >> n;
	} while (n > 99);
	
	if (esPrimo(n) == true && n < 10){
		int d1 = n % 10;
		cout << d1;
	}
	if (n % 5 == 0 && n < 30){
		int d1 = n / 10;
		cout << d1;
	}
	return 0;
}

bool esPrimo(int n){
	if (n == 0 || n == 1){
		return false;
	}
	int i=2;
	while (i <= n && n % i != 0){
		i++;
	}
	return i==n ? true : false;
}