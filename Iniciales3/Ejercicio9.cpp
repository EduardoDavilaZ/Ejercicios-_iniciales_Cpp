//Calcular la media de 50 n�meros e impresi�n del resultado.

#include <iostream>
#include <ctime>   // time()
#include <stdlib.h> // rand()
using namespace std;

int funcion(int);

main(){
	srand(time(0)); // inicializar el generador de n�meros aleatorios
	cout << "\Media: " << (funcion(0)) / 50 << endl;
}

int funcion (int n){
	int media = 0;
	if (n > 50){
		return 0;
	}
	int random = rand() % 100; // dar� un n�mero aleatorio entre 0 y 100
	cout << random << endl;
	return random + funcion (n + 1);
}
