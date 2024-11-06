/*Hacer un programa que pida el valor de un año y diga si es bisiesto o no lo es. Un año es bisiesto
si es divisible por 400, o si es divisible por 4 pero no por 100.*/

//Autor: Eduardo S. Davila

#include <iostream>
using namespace std;

bool esBisiesto(int);

main(){
	int anyo;
	cout << "Introduce el anyo: ";
	cin >> anyo;
	esBisiesto(anyo) ? cout << "El anyo es bisiesto" : cout << "El anyo no es bisiesto"; 
}

bool esBisiesto(int anyo){
	if (anyo % 4 == 0) {	return true;	}
	else {					return false;	}
}