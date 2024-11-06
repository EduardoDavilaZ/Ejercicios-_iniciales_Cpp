/*Leer una serie de n�meros distintos de cero (el �ltimo n�mero de la serie es -99) 
y obtener el n�mero mayor. Como resultado se debe visualizar el n�mero mayor 
y un mensaje de indicaci�n de n�mero negativo, caso de que se haya le�do un 
n�mero negativo.*/

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



