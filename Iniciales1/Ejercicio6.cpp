/*Hacer un programa que pida los valores de los dos catetos de un tri�ngulo 
rect�ngulo, y calcule el valor de la hipotenusa. Utilizar variables tipo float. La 
funci�n para calcular la ra�z cuadrada es sqrt. */

#include <iostream>
#include <cmath>
using namespace std;

//Prototipo de funci�n
float calcular(float, float);

main(){
	float c1, c2, h;
	
	cout << "Introduce el cateto 1: " << endl;
	cin >> c1;
	cout << "Introduce el cateto 2: " << endl;
	cin >> c2;
	
	h = calcular(c1, c2);
	
	cout << "Hipotenusa: " << sqrt(h) << endl;
}

float calcular(float c1, float c2){
	return c1 * c1 + c2 * c2;
}
