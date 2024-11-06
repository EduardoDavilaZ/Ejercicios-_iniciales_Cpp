//Hacer un pseudocódigo que visualice los números impares hasta el 100 y que 
//visualice cuantos impares hay.

#include <iostream>
using namespace std;

// Crearemos una constante para indicar el número máximo, a partir de eso, se irá
// contando hacia atrás los números pares e impares.


//Prototipo de función
void numeros_impares(int, int*);

main(){
	// Inicializar
	int contador_impares = 0;
	
	cout << "Contar numeros pares e impares hasta el 100" << endl;
	numeros_impares(0, &contador_impares);
	cout << "Numeros impares: " << contador_impares << endl;
}

void numeros_impares(int n, int *contador_impares){
	// Si el número no es impar, se le resta 1.
	if (n % 2 == 0){   n = n + 1;   }
	
	if (n > 100){
		return;
	}
	
	cout << n << endl;
	(*contador_impares)++;
	
	return numeros_impares(n + 2, contador_impares);
}
