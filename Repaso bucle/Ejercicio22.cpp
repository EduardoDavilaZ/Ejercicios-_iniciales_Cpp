/*Los empleados de una fábrica trabajan en dos turnos, diurno y nocturno. Se desea calcular el
jornal diario de acuerdo con los siguientes puntos:
 La tarifa de las horas diurnas es de 1.000 pesetas.
 La tarifa de las horas nocturnas es de 1.500 pesetas.
 Caso de ser domingo la tarifa se incrementará en 500 pesetas el turno diurno y 1.000 pesetas
el turno nocturno.*/
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	char tipo[10];
	char dia[10];
	int ptas = 0;
	float h = 0;
	cout << "Introduce el tipo de turno: ";
	cin >> tipo;
	cout << "Introduce el dia: ";
	cin >> dia;
	cout << "Introduce el total de ptas: ";
	cin >> ptas;
	if (strcmp(tipo, "diurno") == 0){
		if (strcmp(tipo, "domingo") == 0){
			h = ptas / 1500; 
		} else {
			h = ptas / 1000; 
		}
	} else {
		if (strcmp(tipo, "domingo") == 0){
			h = ptas / 2000; 
		} else {
			h = ptas / 2500; 
		}
	}
	cout << "Cant. horas: " << h;
}