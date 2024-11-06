//Hacer un programa que visualice y cuente los múltiplos de 3 que hay entre 1 y 100. 

#include <iostream>
using namespace std;

void numeros(int, int*);

main(){
	int contador = 0;
	
	cout << "Multiplos de 3 que hay entre 1 y 100: \n" << endl;
	numeros(0, &contador);
	cout << "\nContador: " << contador << endl;
	
}

void numeros (int n, int* contador){
	if (n > 100){
		return;
	}
	
	if (n % 3 != 0){
		n = n + 1;
		if (n % 3 != 0){
			n = n + 1;
		}
	}
	cout << n << endl;
	
	(*contador)++;
	
	return numeros(n + 3, contador);
}
