/*Hacer un programa que pida números hasta que se entre un cero. Sumar los valores
entrados.*/
//Autor: Eduardo S. Davila

#include <iostream>
using namespace std;

main(){
	int n, s = 0;
	do {
		cout << "Introduce un numero: ";
		cin >> n;
		s = s + n;
	} while (n != 0);
	cout << "Suma: " << s << endl;
}