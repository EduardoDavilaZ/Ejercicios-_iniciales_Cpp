/*Hacer un programa que pida tres números A, B, C. Si A=0 o B < 0 ha de sumar los tres números;
en caso contrario, si C > A ha de multiplicar A x C sino, ha de hacer la operación (A+B) - C.*/

#include <iostream>
using namespace std;

//Autor: Eduardo S. Davila

main(){
	int a, b, c, d;
	cout << "Introducir A: ";	cin >> a;
	cout << "Introducir B: ";	cin >> b;	
	cout << "Introducir C: ";	cin >> c;
	a == 0 ||b < 0 ? cout << "Suma: " << a+b+c : c > a ? cout << "Multiplicacion: " << a*c : cout << "Operacion: " << (a+b) - c;
}