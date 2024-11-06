/*Hacer un programa que pida tres números A, B, C, y después haga el cálculo 
siguiente: 
D = ((A+B) / C). */

#include <iostream>
using namespace std;

//Prototipo de funciones
void introducir(double*);
double calcular(double*);

main(){
	double array[3]; // tipo de dato double para que, al hacer la operación, retorne un número decimal si es necesario en la función calcular.
	double resultado = 0;
	
	cout << "Introduce 3 números" << endl;
	introducir(array);
	resultado = calcular(array);
	
	cout << "Resultado: " << resultado << endl;
}

void introducir(double* array){
	for (int i=0; i<3; i++){
		cin >> array[i];
	}
}

double calcular(double* array){
	return (array[0] + array[1]) / array[2];
}

