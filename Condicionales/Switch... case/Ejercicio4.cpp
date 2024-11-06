/*Hacer un programa que pida dos números A, B, y un carácter L. Si el valor del carácter L es ‘A’,
calcular el perímetro de un rectángulo con los valores de A y B correspondientes a los lados; si el
valor de L es ‘B’, calcular el área del rectángulo; si el valor de L es ‘C’, calcular el área de un
triángulo de altura A y base B; si el valor de L es ‘D’ calcular el valor de la hipotenusa de un
triángulo que tiene A y B como catetos.*/

#include <iostream>
#include <cmath>
using namespace std;

main(){
	int a, b;
	char l;
	cout << "Hola";
	getchar();
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	cout << "Introduce la operacion (a = perimetro, b = area, d = hipotenusa): ";
	cin >> l;
	switch (l) {
		case 'a': cout << "Perimetro: " << a*2 + b*2;
				break;
		case 'b': cout << "Area: " << a*b;
				break;
		case 'd': cout << "Hipotenusa: " << sqrt(a*a + b*b);
				break;
		default: cout << "No se pueden operar los valores";
	}
}