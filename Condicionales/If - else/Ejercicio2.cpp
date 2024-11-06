/*Hacer un programa que pida el nombre, el precio y la cantidad de un producto. El programa ha de
calcular el total, y si el producto es ‘A’, ha de pedir un % de descuento y aplicarlo al total. El
programa ha de visualizar el total, el total descuento, y el precio final.*/

//Autor: Eduardo Davila Z.

#include <iostream>
#include <string.h>
using namespace std;

float calcular(char[], int, int, float*);

main(){
	char nombre[5];
	int p, c;
	float descuento;
	
	cout << "Introducir el nombre del producto: ";
	cin >> nombre;
	cout << "Introducir el precio: ";
	cin >> p;
	cout << "Introducir cantidad: ";
	cin >> c;
	float t = calcular(nombre, p, c, &descuento);
	cout << "\nTotal: " << p * c;
	cout << "\nDescuento: " << descuento;
	cout << "\nTotal con descuento: " << t;
	 
}

float calcular(char nombre[], int p, int c, float* descuento){
	float t;
	if (strcmp(nombre, "A") == 0){
		int d;
		cout << "Introduce el descuento: ";
		cin >> d;
		(*descuento) = (p * d) / 100.0;
		return t = (p * c) - (*descuento);
	} else {
		return p * c;
	}
}