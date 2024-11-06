/*Leer una serie de números distintos de cero (el último número de la serie es -99) 
y obtener el número mayor. Como resultado se debe visualizar el número mayor 
y un mensaje de indicación de número negativo, caso de que se haya leído un 
número negativo.*/

#include <iostream>
#include <unistd.h>
using namespace std;

void funcion (int*);

main(){
	int mayor = 0;
	funcion(&mayor);
	cout << "El numero mayor es: " << mayor << endl;
}

void funcion(int* mayor){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	
	if (n == -99){
		return;
	}
	if (n > *mayor){
		*mayor = n;
	}
	
	sleep(0.5);
	system("cls");
	return funcion(mayor);
}



