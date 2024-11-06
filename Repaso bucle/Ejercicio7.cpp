//Leer dos números y decidir si están en orden creciente.
#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Primer numero: ";
	cin >> a;
	cout << "Segundo numero: ";
	cin >> b;
	a > b ? cout << "Estan en orden decreciente" : cout << "Estan en orden creciente";
}