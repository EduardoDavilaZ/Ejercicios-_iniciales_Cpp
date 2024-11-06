//Leer un número entero de dos dígitos y determinar a cuánto es igual la suma de sus dígitos.

#include <iostream>
using namespace std;

//Prototipo de función
void funcion (int, int, int*);

main(){
	int n, contador = 0, suma = 0;
	do{
		cout << "Introduce un numero de 2 digitos: ";
		cin >> n;
		funcion(n, 0, &contador);
		contador -= 1; 									// se estaba sumando 1 antes de retornar
		suma = contador + (n - (contador * 10)); 		// suma el contador (primer dígito) + (n - las decenas (contador))
		cout << "Suma de los dos digitos: " << suma << endl;
		contador = 0, suma = 0;
	} while (n > 9 && n < 100);							// asegurarse que solo se puedan introducir números de 2 dígitos
}

void funcion (int n, int i, int* contador){				// va sumando 10 a i hasta sobrepasar n, después se le resta 1 al contador
	if (i > n){
		return;
	}
	(*contador)++;
	return funcion (n, i + 10, contador);
}
