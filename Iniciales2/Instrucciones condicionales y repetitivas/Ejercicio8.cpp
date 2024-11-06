/*Introducir dos n�meros por teclado. Visualizar los n�meros naturales que hay 
entre ambos n�meros empezando por el m�s peque�o, contar cu�ntos hay y 
cu�ntos de ellos son pares. Calcular la suma de los impares.*/

#include <iostream>
using namespace std;

//Prototipo de funci�n
void funcion (int, int, int*, int*);

main(){
	int inicio = 0, fin = 0;
	int contador = 0, pares = 0;
	cout << "Introduce 2 numeros: " << endl;
	do{
		cin >> inicio;
		cin >> fin;	
		if (inicio > fin){
			cout << "Vuelve a introducir los numeros, el primero debe ser menor al segundo" << endl;
		}
	} while (inicio > fin);
	
	funcion (inicio, fin, &contador, &pares);
	
	cout << "Numeros totales: " << contador << endl;
	cout << "Numeros pares: " << pares << endl;
}

void funcion (int inicio, int fin, int* contador, int* pares){
	if (inicio > fin){
		return;
	}
	(*contador)++;
	if (inicio % 2 != 0){
		inicio + 1;
	} else {
		(*pares)++;
	}
	
	cout << inicio << endl;
	
	return funcion (inicio + 1, fin, contador, pares);
}
