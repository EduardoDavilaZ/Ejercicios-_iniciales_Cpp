/*Introducir una serie de números. Sumar los múltiplos de 5, cuál es el mayor y 
cuántos números se han introducido.*/

#include <iostream>
#include <unistd.h>
using namespace std;

//Prototipo de función
void funcion (int*, int*, int*);

main(){
	int contador = 0, suma = 0, mayor = 0;
	funcion(&suma, &mayor, &contador);
}

void funcion (int* suma, int* mayor, int* contador){
	int n;
	cout << "Introduce un numero: " << endl;
	cin >> n;
	
	if (n == 0){												// al introducir 0, se detiene la ejecución
		return;
	}
	
	if (n % 5 == 0){
		*suma = *suma + n;
	}
	
	if (n > *mayor){
		*mayor = n;
	}
	(*contador)++;
	
	cout << "Suma de multiplos de 5: " << *suma << endl;
	cout << "Numero mayor: " << *mayor << endl;
	sleep(3);													// pausa la ejecución 3 segundos para visualizar los resultados
	system("cls");												// limpia la pantalla
	return funcion (suma, mayor, contador);
}
