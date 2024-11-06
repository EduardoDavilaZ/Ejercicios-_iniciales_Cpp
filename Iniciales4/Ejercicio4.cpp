//Leer un n�mero entero de dos d�gitos y determinar a cu�nto es igual la suma de sus d�gitos.

#include <iostream>
using namespace std;

//Prototipo de funci�n
void funcion (int, int, int*);

main(){
	int n, contador = 0, suma = 0;
	do{
		cout << "Introduce un numero de 2 digitos: ";
		cin >> n;
		funcion(n, 0, &contador);
		contador -= 1; 									// se estaba sumando 1 antes de retornar
		suma = contador + (n - (contador * 10)); 		// suma el contador (primer d�gito) + (n - las decenas (contador))
		cout << "Suma de los dos digitos: " << suma << endl;
		contador = 0, suma = 0;
	} while (n > 9 && n < 100);							// asegurarse que solo se puedan introducir n�meros de 2 d�gitos
}

void funcion (int n, int i, int* contador){				// va sumando 10 a i hasta sobrepasar n, despu�s se le resta 1 al contador
	if (i > n){
		return;
	}
	(*contador)++;
	return funcion (n, i + 10, contador);
}
