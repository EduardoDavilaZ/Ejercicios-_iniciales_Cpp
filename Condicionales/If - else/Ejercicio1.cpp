/*Hacer un programa que pida el precio y el descuento de un producto y calcule el total. Si el total
supera las 10.000 pesetas, el programa ha de descontar 100 pesetas.*/

//Autor: Eduardo Davila Z.

#include <iostream>
using namespace std;

float calcular (int, int);

main(){
	int p, d;
	float t;
	cout << "Introduce el precio: ";
	cin >> p;
	cout << "Introduce el descuento: ";
	cin >> d;
	t = calcular(p, d);
	cout << "Total: " << t << endl;
}

float calcular (int p, int d){
	float descuento = (p * d) / 100.0; 
    float t = p - descuento;
	
	if (t > 10000){
		return (t - 100);
	} else {
		return t;
	} 
}