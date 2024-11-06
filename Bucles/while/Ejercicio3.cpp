/*Hacer un programa que pida números hasta que se entre un negativo. Se han de sumar los
números pares en una variable, y los impares en otra.*/

#include <iostream>
using namespace std;

main(){
	int n = 1;
	int p = 0, i = 0;
	while (n >= 0){
		cout << "Introduce un numero: ";
		cin >> n;
		if (n > 0){
			n % 2 == 0 ? p = p + n : i = i + n;
		}
	}
	cout << "Pares: " << p;
	cout << "\nImpares: " << i;
}