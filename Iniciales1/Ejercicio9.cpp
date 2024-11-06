/*Hacer un programa que pida el radio R de una circunferencia, y  calcule la 
longitud y el área. */

#include <iostream>
using namespace std;

//Prototipo de funciones
int longitud(int);
int area (int);

main(){
	int r;
	
	cout << "Introduce el radio" << endl;
	cin >> r;
	
	cout << "Longitud: " << longitud(r) << endl;
	cout << "Área: " << area(r) << endl;
}

int longitud(int r){
	return (r + r) * 3.1416;
}

int area (int r){
	return (3.1416 * r * r);
}
