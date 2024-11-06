/*Desarrollar un algoritmo que determine en un conjunto de 100 números 
naturales: a) ¿Cuántos son menores de 157?;  b) ¿Cuántos son mayores de 50? ; 
c) ¿Cuántos están comprendidos entre 25 y 45? */

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int funcion(int, int*, int*, int*);

main(){
	srand(time(0)); // inicializar el generador de números aleatorios
	int menor = 0, mayor = 0, rango = 0;
	funcion(0, &menor, &mayor, &rango);
	cout << "Menores de 157: " << menor << endl;
	cout << "Mayores de 50: " << mayor << endl;
	cout << "Numeros comprendidos entre 25 y 45: " << rango << endl;
}

int funcion (int n, int* menor, int* mayor, int* rango){
	if (n > 100){
		return 0;
	}
	int random = rand() % 200;
	cout << random << endl;
	if (random < 157){
		(*menor)++;
	}
	if (random > 50){
		(*mayor)++;
	}
	if (25 < random && random < 45){
		(*rango)++;
	}
	return funcion (n + 1, menor, mayor, rango);
}
