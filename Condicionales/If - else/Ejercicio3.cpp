/*Introducir dos números por el teclado, DIVIDENDO y DIVISOR. Si dividendo es divisible por
divisor, el programa ha de mostrar el mensaje “DIVISIBLES”.*/

//Autor: Eduardo S. Davila Z.

#include <iostream>
using namespace std;

void division(int, int);

main(){
	int dvdd, dvsr;
	cout << "Introducir dividendo: ";
	cin >> dvdd;
	cout << "Introducir divisor: ";
	cin >> dvsr;
	division(dvdd, dvsr);
}

void division(int dvdd, int dvsr){
	dvdd % dvsr == 0 ? cout << "Divisibles" : cout << "No divisibles";
}
