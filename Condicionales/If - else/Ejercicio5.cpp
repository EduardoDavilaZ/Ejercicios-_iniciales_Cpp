/*Hacer un programa que pida un número del 1 al 7, y que diga a que día de la semana corresponde
(1- lunes, 2- martes, ...).*/

#include <iostream>
using namespace std;

main(){
	int n;
	char* dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
	cout << "Introduce un numero: ";
	cin >> n;
	cout << "Ese dia es el " << dias[n-1] << endl;
}