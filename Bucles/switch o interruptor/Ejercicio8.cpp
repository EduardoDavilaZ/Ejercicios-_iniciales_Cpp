/*Dado un número menor que 10, hallar su tabla de multiplicar por duplicado, es decir,
empezando por el cero y por el 10 de forma alternativa.*/
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int sw = 0, n, i = 0;
	do {
		cout << "Introduce un numero menor a 10: ";
		cin >> n;
	} while (n > 10);
	int aux = n;
	while (sw != 1){
		cout << i << " x " << n << " = " << i*n << endl;
		if (i == aux && n == 0){
			sw = 1;
		}
		n-=1;
		i+=1;
	}
}
