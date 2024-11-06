/*Hacer un programa que pida caracteres hasta pulsar un punto. Contar el número de
caracteres “a” introducidos.*/
// Autor: Sr. Eduardo Davila
#include <iostream>
using namespace std;

main(){
	int a;
	char c;
	do {
		cout << "Introduce un caracter: ";
		cin >> c;
		if (c == 'a' || c == 'A'){
			a+=1;
		}
	} while (c != '.');
	cout << "Numero de 'a': " << a << endl;
}