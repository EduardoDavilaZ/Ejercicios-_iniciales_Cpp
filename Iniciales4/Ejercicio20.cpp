//Leer tres números enteros y mostrarlos ascendentemente.

//Autor: Eduardo Davila Z. 

#include <iostream>
using namespace std;

void introducir(int*);
void ordenar(int*);
void visualizar(int*);

main(){
	int array[3];
	
	introducir(array);
	ordenar(array);
	visualizar(array);
	
}

void introducir (int *array){
	for (int i=0; i<3; i++){
		cout << "Introducir [" << i << "]: ";
		cin >> *(array + i);
	}
}

void ordenar (int *array){
	for (int i=0; i<3; i++){
		for (int j=0; j<i-1; j++){
			if ( *(array + i) > *(array + i + 1)){
				int aux = *(array + i);
				*(array + i) = *(array + i + 1);
				*(array + i + 1) = aux;
			}
		}
	}
}

void visualizar (int *array){
	cout << "Array: " << endl;
	for (int i=0; i<3; i++){
		cout << *(array + i) << endl;
	}
}
