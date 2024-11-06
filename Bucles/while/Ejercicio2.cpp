/*acer un programa que pida caracteres hasta que se entre un punto. Ha de sumar la
cantidad de caracteres “a” introducidos.*/

//Autor: Eduardo S. Davila

#include <iostream>
#include <cstring>
using namespace std;

main(){
	char c;
	int a;
	while (c != '.'){
		cout << "Introduce una letra: ";
		cin >> c;
		if (c == 'a'){
			a+=1;
		}
	}
	cout << "Contador de A: " << a << endl;
}