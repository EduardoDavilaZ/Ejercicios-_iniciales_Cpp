//Hacer un pseudocódigo que visualice los números pares entre 0 y 100. 

#include <iostream>
using namespace std;

void numeros_pares(int);

main(){
	cout << "Numeros pares del 0 al 100" << endl;
	numeros_pares(0);
}

void numeros_pares(int n){
	if (n > 100){
		return;
	}
	cout << n << endl;
	return numeros_pares(n + 2);
}
