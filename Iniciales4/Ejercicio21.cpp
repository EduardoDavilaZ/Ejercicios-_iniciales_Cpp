//Leer tres números enteros de dos dígitos cada uno y determinar en cuál de ellos se encuentra 
//el mayor dígito. 

//Autor: Eduardo Davila Z. 

#include <iostream>
using namespace std;

void funcionMagica (int*, int);

main(){
	int mayor;
	funcionMagica(&mayor, 0);
	cout << "El numero mayor es: " << mayor << endl;
}

void funcionMagica (int* mayor, int i) {
	if (i > 2){
		return;
	}
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	if (i == 0 || (*mayor) < n){
		(*mayor) = n;
	}
	return funcionMagica (mayor, i+1);
}
