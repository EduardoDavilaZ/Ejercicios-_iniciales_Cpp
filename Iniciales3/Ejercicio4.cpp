//Leer 500 números enteros y obtener cuantos son positivos

#include <iostream>
#include <stdlib.h> // necesario para usar rand()
using namespace std;

void funcion(int, int*);

main(){
	int positivos = 0;
	funcion(0, &positivos);
	cout << "\nNumeros positivos: " << positivos << endl;
}

void funcion (int n, int* positivos){
	if (n > 500){
		return;
	}
	int random = rand() % 200 - 100; // dará un número aleatorio entre -100 y 100
	
	cout << random << endl;
	
	if (random > 0){
		(*positivos)++;
	}
	
	return funcion (n + 1, positivos);
}

