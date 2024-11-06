/*Hacer un pseudoc�digo que visualice los n�meros del 1 al 100. Que calcule la 
suma de todos los n�meros pares por un lado, y por otro, la de todos los impares. */

#include <iostream>
using namespace std;

//Prototipo de funci�n
void funcion (int, int*, int*);

main(){
	int pares = 0;
	int impares = 0;
	cout << "Numeros del 1 al 100" << endl;
	cout << endl;
	funcion (1, &pares, &impares);
	
	cout << "\nSuma de numeros pares: " << pares << endl;
	cout << "Suma de numeros impares: " << impares << endl;
}

void funcion (int n, int* pares, int* impares){
	if (n > 100){
		return;
	}
	
	cout << n << endl;
	
	if (n % 2 == 0){
		*pares = *pares + n;
	} else{
		*impares = *impares + n;
	}
	return funcion (n + 1, pares, impares);
}


