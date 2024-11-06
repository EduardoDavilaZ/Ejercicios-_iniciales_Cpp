/*Se desea calcular independientemente la suma de los números pares e impares 
comprendidos entre 1 y 200. */

#include <iostream>
using namespace std;

void funcion (int, int*, int*);

main(){
	int pares = 0, impares = 0;
	
	funcion(0, &pares, &impares);
	
	cout << "Suma de numeros pares: " << pares << endl;
	cout << "Suma de numeros impares: " << impares << endl;
}

void funcion (int n, int* pares, int* impares){
	if (n > 200){
		return;
	}
	if (n % 2 == 0){
		*pares = *pares + n;
	} else {
		*impares = *impares + n;
	}
	
	funcion (n + 1, pares, impares);
}
