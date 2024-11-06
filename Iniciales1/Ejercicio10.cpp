/*Hacer un programa que pida la longitud de dos lados de un rectángulo C1 y C2, y 
en calcule el perímetro y el área. Calcular la longitud de la diagonal (ver programa 
Pr6), y después el área del triángulo que forman los dos lados con la diagonal . */

#include <iostream>
#include <cmath>
using namespace std;

//Prototipo de funciones
float calcular(float, float);
float area(float, float);

main(){
	float c1, c2, h;
	
	cout << "Introduce el cateto 1: " << endl;
	cin >> c1;
	cout << "Introduce el cateto 2: " << endl;
	cin >> c2;
	
	h = calcular(c1, c2);
	
	cout << "Hipotenusa: " << sqrt(h) << endl;
	cout << "Area: " << area(c1, c2) << endl;
}

float calcular(float c1, float c2){
	return c1 * c1 + c2 * c2;
}

float area(float c1, float c2){
	return (c1 * c2)/2;
}
