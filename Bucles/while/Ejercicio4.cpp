/*Hacer un programa que pida caracteres hasta que se pulse un punto. El programa ha de
contar la cantidad de vocales entradas.*/
//Autor: Sr. Eduardo S. Davila
#include <iostream>
using namespace std;

main(){
	char c;
	int v;
	while (c != '.'){
		cout << "Introduce una letra: ";
		cin >> c;
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			v++;
		}
	}
	cout << "Cantidad de vocales: " << v;
}