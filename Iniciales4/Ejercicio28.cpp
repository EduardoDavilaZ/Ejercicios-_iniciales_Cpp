//Leer un número entero menor que 50 y positivo y determinar si es un número primo.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	int n;
	do{
		cout << "Introducir un numero: ";
		cin >> n;
	} while (n < 50 || n < 0);

	esPrimo(n) ==  true ? cout << "es primo" << endl : cout << " no es primo" << endl;;
}

bool esPrimo(int n){
	int i = 2;
	while (i < n && n % i != 0){
		i++;
	}
	return i != n ? true : false;
}
	
	