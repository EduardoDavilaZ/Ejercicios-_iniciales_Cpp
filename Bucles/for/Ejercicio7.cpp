//Hacer un programa que pida un número, y después muestre su tabla de multiplicar.
//Autor: Eduardo Davila Z.

#include <iostream>
using namespace std;

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	for (int i=0; i <= 10; i++){
		cout << i << " x " << n << " = " << i*n << endl;
	}
}