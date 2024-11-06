/*Hacer un programa que pida números hasta que se entre un cero. El programa ha de dejar
entrar un mínimo de 10 números; sumar los divisibles por 6 y 3 en una variable, y el resto
en otra.*/
// Autor: Sr. Eduardo Davila
#include <iostream>
using namespace std;

main(){
	int s, r = 0, n, c;
	do {
		cout << "Introduce un numero: ";
		cin >> n;
		if (n % 6  == 0 || n % 3  == 0){
			s = s + n;
		} else {
			r = r + n;
		}
		c++;
	} while (c < 10 && n > 0);
	cout << "Suma de multiplos de 3 y 6: " << s << endl;
	cout << "Suma del resto: " << r << endl;
}