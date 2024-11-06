//Hacer un programa que pida tres números por el teclado, y los imprima en orden ascendente.

//Autor: Sr. Eduardo Davila Z.

#include <iostream>
#include <algorithm> // 10000 iq
#define swap(x, y) { int aux=x; x=y; y=aux; } // 1000000 iq
using namespace std;

main(){
	int array[3];
	for (int i=0; i<=2; i++){
		cout << "Introduce un numero: ";
		cin >> array[i];
	}
	//sort(array, array + 3); eso es trampa
	// Realizar comparaciones (no quise hacer bubble sort xq estamos en if-else)
	if (array[0] > array[1]) {swap(array[0], array[1]);}
    if (array[0] > array[2]) {swap(array[0], array[2]);}
    if (array[1] > array[2]) {swap(array[1], array[2]);}

	cout << "Array ordenado: \n" << array[0] << endl << array[1] << endl << array[2] << endl;
}