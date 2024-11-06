/*Hacer un programa que calcule los N primeros términos de la serie de Fibonacci. En
esta serie cada valor se obtiene de la suma de los dos anteriores.
1, 1, 2, 3, 5, 8, 13, 21, 34, ....
N es un valor que se ha de introducir desde teclado.*/
//Autor: Eduardo Davila Z.

#include <iostream>
#define swap(x, y, z){x=y; y=z; }
using namespace std;

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	int a = 0, b = 1, next;
	
    for (int i=0; i<n; i++) {
        next = a + b;
        cout << next << ", ";
        swap(a, b, next);
    }
}