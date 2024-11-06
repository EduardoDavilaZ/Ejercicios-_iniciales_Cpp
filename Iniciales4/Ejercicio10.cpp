//Leer un número entero de dos dígitos y determinar si los dos dígitos son iguales.

#include <iostream>
using namespace std;

main(){
	int n;
	do{
		cout << "Introduce un numero de 2 digitos: ";
		cin >> n;
		int digito1 = n % 10; // unidad
        int digito2 = (n / 10) % 10; // decena
        
		if (digito2 == digito1) {
			cout << "Ambos digitos son iguales" << endl;
		} else {
			cout << "Los digitos son diferentes" << endl;
		}
	} while (n > 9 && n < 100);
}
