//Hacer un programa que muestre las primeras 10 tablas de multiplicar.
// Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	cout << "Primeras 10 tablas de multiplicar" << endl;
	
	for (int i=1; i<=10; i++){
		for (int j=1; j<=10; j++){
			cout << i << " x " << j << " = " << i*j << endl;
			if (j == 10){	cout << endl;	} // salto de línea
		}
	}
}