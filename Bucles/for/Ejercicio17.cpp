/*Hacer un programa que muestre los N primeros términos de la serie.
1, 2, 4, 8, 16, 32, 64, 128, .....
N es un valor que se ha de entrar desde el teclado.
Autor: Eduardo S. Davila Z.*/

#include <iostream>
using namespace std;

main(){
	int n, r = 1;
	cout << "Introduce la cantidad de numeros: ";
	cin >> n;
	for (int i = 1; i <= n; i++){
        cout << r << ", ";
        r = r * 2;
    }
}