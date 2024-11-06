/*Hacer un programa que pida un número, y diga si este es primo o no lo es. Un número
primo es aquel divisible sólo por la unidad y el mismo.*/
//Autor: Sr. Eduardo S. Davila
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	int n;
	while (esPrimo(n) == false){
		cout << "Introduce un numero: ";
		cin >> n;
		esPrimo(n);
	}
}

bool esPrimo(int n) {
    if (n <= 1){
    	return false;
	} 
    for (int i = 2; i <= n / 2; i++) { // divide n entre todos los numeros hasta la mitad de n
        if (n % i == 0) {	return false;	}
    }
    return true;
}