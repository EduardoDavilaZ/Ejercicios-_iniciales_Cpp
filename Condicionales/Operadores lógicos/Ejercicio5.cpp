/*Hacer un programa que pida tres números, sume el más gran con el más pequeño, y reste el otro.*/

#include <iostream>
using namespace std;

//Autor: Sr. Eduardo Davila Z.

main(){
	int array[3];
	int mayor = 0, menor = 0, r = 0;
	for (int i=0; i<=2; i++){
		cout << "Introduce un numero: ";
		cin >> array[i];
		if (array[i] > mayor || i == 0){	mayor = array[i];	}
		if (array[i] < menor || i == 0){	menor = array[i];	}
	}
	for (int i=0; i<=2; i++){
		if (array[i] != mayor && array[i] != menor){	r = mayor + menor - array[i];	}
	}
	cout << "Resultado = " << r << endl;
}