//Hacer un programa que pida dos números por teclado. Ha de calcular el producto de los
//dos números, pero utilizando sumas. Por ejemplo 3x4 = 3+3+3+3.
// Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int a, b, p;
	cout << "Introduce el multiplicando: ";
	cin >> a;
	cout << "Introduce el multiplicador: ";
	cin >> b;
	
	for (int i=1; i<=b; i++){
		if (i == b){
			cout << a << " = ";
			p += a;
		} else {
			cout << a << " + ";
			p += a;
		}
	}
	cout << p;
}