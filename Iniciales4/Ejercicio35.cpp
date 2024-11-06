//Leer un número entero de dos dígitos, guardar cada dígito en una variable diferente y luego mostrarlas en pantalla.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int n;
	int array[2];
	do{
		cout << "Introduce un numero: ";
		cin >> n;
	} while (n < 9 || n > 100);
	array[0] = (n / 10) % 10;
	array[1] = n % 10;
	
	for (int i=0; i<2; i++){
		cout << array[i] << endl;
	}
}