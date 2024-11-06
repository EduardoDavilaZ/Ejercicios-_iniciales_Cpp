/*Hacer un programa que pida la base y el exponente. Se ha de calcular la potencia. El
programa ha de controlar, que si exponente=0, potencia = 1, y si exponente = 1, potencia
= base.*/
// Autor: Sr. Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int b, e, p = 1; // importante inicializar a 1
	cout << "Introduce la base: ";
	cin >> b;
	cout << "Introduce el exponente: ";
	cin >> e;
	
	for (int i=1; i<=e; i++){
		if (i == e){
			cout << b << " = ";
			p = p * b;
		} else {
			cout << b << " x ";
			p = p * b;
		}
	}
	cout << p;
}

