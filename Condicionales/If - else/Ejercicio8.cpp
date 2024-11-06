//Hacer un programa que pida dos números y que después los imprima en orden ascendente.

#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce un numero: "; cin >> a; 
	cout << "Introduce otro numero: "; cin >> b;
	a > b ? cout << a << endl << b : cout << b << endl << a;
}