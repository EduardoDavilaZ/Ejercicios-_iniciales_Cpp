/*Hacer un programa que pida dos números y que diga si son iguales; en caso que no lo sean ha de
decir cual de los dos es el mayor.*/

#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce un numero: "; cin >> a; 
	cout << "Introduce otro numero: "; cin >> b;
	a == b ? cout << "Son iguales" : a > b ? cout << a << " es el mayor" : cout << b << " es el mayor";
}