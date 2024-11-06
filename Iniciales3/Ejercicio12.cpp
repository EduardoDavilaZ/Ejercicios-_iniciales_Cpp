/*Dados 10 números enteros, visualizar la suma de los números pares de la lista, 
cuántos números pares existen y cuál es la media aritmética de los números 
impares. */

#include <iostream>
using namespace std;

//Prototipo de funciones
void introducir(int*);
int sumaPares(int*);
int media(int*);

main(){
	int array[10];
	introducir(array);
	cout << "Suma de los numeros pares: " << sumaPares(array) << endl;
	cout << "Media aritmetica: " << media(array);
}

void introducir(int* array){
	for (int i=0; i<10; i++){
		cout << "Introducir [" << i+1 << "] : ";
		cin >> *(array + i);
	}
}

int sumaPares(int* array){
	int suma = 0;
	for (int i=0; i<10; i++){
		if (*(array + i) % 2 == 0){
			suma += *(array + i);
		}
	}
	return suma;
}

int media (int* array){
	int suma = 0, media = 0;
	for (int i=0; i<10; i++){
		suma += *(array + i);
	}
	media = suma / 10;
	return media;
}
