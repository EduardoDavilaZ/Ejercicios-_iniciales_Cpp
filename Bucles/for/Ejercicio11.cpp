/*Hacer un programa que pida N números. El programa ha de decir cuantos hay de pares,
y cuantos de impares.*/
// Autor: Eduardo S. Davila

#include <iostream>
using namespace std;

main(){
	int max, n, cp=0, ci=0;
	cout << "Introduce la cantidad de numeros: ";
	cin >> max;
	for (int i=1; i <= max; i++){
		cout << "Introduce un numero: ";
		cin >> n;
		n % 2 == 0 ? cp++ : ci++;
	}
	cout << "Contador pares: " << cp << endl;
	cout << "Contador impares: " << ci << endl;
}