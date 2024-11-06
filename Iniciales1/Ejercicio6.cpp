/*Hacer un programa que pida los valores de los dos catetos de un triángulo 
rectángulo, y calcule el valor de la hipotenusa. Utilizar variables tipo float. La 
función para calcular la raíz cuadrada es sqrt. */

#include <iostream>
#include <cmath>
using namespace std;

//Prototipo de función
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
