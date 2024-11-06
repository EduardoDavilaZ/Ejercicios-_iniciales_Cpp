//Hacer un programa que pida N números por teclado, los sume y en calcule la media.
//Autor: Eduardo Davila Z.

#include <iostream>
using namespace std;

main(){
	float n, max, s=0;
	cout << "Numeros a introducir: ";
	cin >> max;
	for (int i=1; i <= max; i++){
		cout << "Introduce un numero: ";
		cin >> n;
		s = s + n;
	}
	float media = s/max;
	cout << "Media: " << media << endl;
}