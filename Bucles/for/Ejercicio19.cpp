/*Hacer un programa que pida un número por el teclado, y diga si es perfecto o no lo es.
Un número perfecto es aquel que coincide con la suma de sus divisores, por ejemplo el 6
= 3+2+1, el 28 = 14 + 7 + 4 + 2 + 1.*/
//Autor: Eduardo Davila Z.

#include <iostream>
using namespace std;

bool esPerfecto(int);

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	esPerfecto(n) == true ? cout << "El numero es perfecto" : cout << "No es perfecto";
}

bool esPerfecto (int n){
	int d = 0;
	for (int i=1; i<n; i++){  //no debe incluir el mismo numero
		if (n % i == 0){
			d+=i;
		}
	}
	if (d == n){
		return true;
	} else {
		return false;
	}
}