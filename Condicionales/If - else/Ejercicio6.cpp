//Hacer un programa que pida dos números por el teclado y diga si son iguales o no lo son.

#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	a == b ? cout << "Los numeros son iguales" : cout << "Los numeros son diferentes";
}