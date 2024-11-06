//Dado el nombre de un mes y si el año es o no bisiesto, deducir el número de días del mes.
//Autor: Eduardo S. Davila Z.

#include <iostream>
#include <cstring>
using namespace std;

main(){
	int anyo;
	char mes[10];
	cout << "Introduce un mes: ";
	cin >> mes;
	cout << "Introduce un año: ";
	cin >> anyo;
	
	if (strcmp(mes, "enero") == 0 || strcmp(mes, "marzo") == 0 || strcmp(mes, "mayo") == 0 || strcmp(mes, "julio") == 0 || strcmp(mes, "agosto") == 0 || strcmp(mes, "octubre") == 0 || strcmp(mes, "diciembre") == 0){
		cout << "El mes tiene 31 dias" << endl;
	}
	if (strcmp(mes, "abril") == 0 || strcmp(mes, "junio") == 0 || strcmp(mes, "septiembre") == 0 || strcmp(mes, "noviembre") == 0){
		cout << "El mes tiene 31 dias" << endl;
	}
	if (strcmp(mes, "febrero") == 0 && anyo % 4 == 0){
		cout << "El mes tiene 29 dias" << endl;
	}
	if (strcmp(mes, "febrero") == 0 && anyo % 4 != 0) {
		cout << "El mes tiene 28 dias" << endl;
	}
	if (anyo % 4 == 0){
		cout << "El año es bisiesto" << endl;
	}
}