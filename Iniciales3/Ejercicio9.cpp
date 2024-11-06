//Calcular la media de 50 números e impresión del resultado.

#include <iostream>
#include <ctime>   // time()
#include <stdlib.h> // rand()
using namespace std;

int funcion(int);

main(){
	srand(time(0)); // inicializar el generador de números aleatorios
	cout << "\Media: " << (funcion(0)) / 50 << endl;
}

int funcion (int n){
	int media = 0;
	if (n > 50){
		return 0;
	}
	int random = rand() % 100; // dará un número aleatorio entre 0 y 100
	cout << random << endl;
	return random + funcion (n + 1);
}
