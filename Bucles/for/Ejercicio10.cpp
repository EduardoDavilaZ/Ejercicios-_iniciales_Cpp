/*Hacer un programa que pida un número y calcule su factorial. Por ejemplo, factorial de
3 es 3x2x1 = 6, factorial de 4 es 4x3x2x1 = 24.*/
// Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int n, f = 1;
	cout << "Introduce un numero: ";
	cin >> n;
	for (int i=1; i <= n; i++){
		f = f * i;
	}
	cout << "El factorial de " << n << " es " << f << endl;
}