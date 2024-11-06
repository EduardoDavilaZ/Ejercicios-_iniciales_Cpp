//Leer un número entero de tres dígitos y determinar si el primer dígito es igual al último.

//Autor: Eduardo Davila Z. 

#include <iostream>
using namespace std;

bool funcion (int);

main(){
	int n;
	do {
        cout << "Introduce un numero de 3 dígitos: ";
        cin >> n; 
        if (n < 100 || n > 999) {
            cout << "Num no valido. Debe tener 3 dígitos." << endl;
        } else {
            if (funcion(n)) {
                cout << "El primer digito es igual al ultimo" << endl;
            } else {
                cout << "El primer digito es diferente al ultimo" << endl;
            }
        }
    } while (n < 100 || n > 999);

}

bool funcion (int n){
	return (n / 100 == n % 10) ? true : false;
}