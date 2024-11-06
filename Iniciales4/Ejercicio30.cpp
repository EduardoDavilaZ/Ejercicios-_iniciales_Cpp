//Leer un número entero de cuatro dígitos y determinar si el segundo dígito es igual al penúltimo.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int n;
	do{
		cout << "Introduce un numero: ";
		cin >> n;
	} while (n < 999 || n > 10000);
	int sd = (n / 100) % 10;
	int td = (n / 10) % 10;
	sd == td ? cout << "El segundo digito es igual al penultimo" : cout << "El segundo digito es diferente al penultimo";	
}