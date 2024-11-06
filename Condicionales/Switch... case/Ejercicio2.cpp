/*Hacer un programa que introduciendo un número del 1 al 7, diga si corresponde a lunes, martes,
miércoles, ... Si el número no está comprendido entre 1 y 7, ha de mostrar un mensaje avisando
que no puede decir el día.*/

#include <iostream>
using namespace std;

main(){
	int n;
	cout << "Introduce un numero del 1 al 7: ";
	cin >> n;
	
	switch (n) {
		case 1: cout << "El numero corresponde a Lunes";
				break;
		case 2: cout << "El numero corresponde a Martes";
				break;
		case 3: cout << "El numero corresponde a Miercoles";
				break;
		case 4: cout << "El numero corresponde a Jueves";
				break;
		case 5: cout << "El numero corresponde a Viernes";
				break;
		case 6: cout << "El numero corresponde a Sabado";
				break;
		case 7: cout << "El numero corresponde a Domingo";
				break;
		default: cout << "No se puede decir el dia";
	}
}