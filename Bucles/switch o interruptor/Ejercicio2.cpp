/*Hacer un programa que calcule independientemente la suma de los pares y los impares de
los números entre 1 y 100, utilizando switch.*/
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int sw = 0, sp, si, n = 1;
	while (sw == 0){
		n % 2 == 0 ? sp = sp + n : si = si + n;
		n++;
		if (n == 100){ sw = 1; };
	}
	cout << "Suma pares: " << sp << endl;
	cout << "Suma impares: " << si << endl;
}