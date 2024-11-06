//Realizar un programa que visualice y cuente los múltiplos de 5 que hay entre 1 y 500. 

#include <iostream>
using namespace std;

//Prototipo de funciones
void multiplos (int, int*);
int verificar (int);

main(){
	int contador = 0;
	cout << "Multiplos de 5 entre 1 y 100\n" << endl;
	multiplos(1, &contador);
	cout << "\nContador de multiplos de 5: " << contador << endl;
}

void multiplos (int n, int* contador){
	if (n > 100){
		return;
	}
	n = verificar(n);
	(*contador)++;
	cout << n << endl;
	return multiplos(n + 5, contador);
}

int verificar (int n){
	if (n % 5 == 0){
		return n;
	}
	return verificar (n + 1);
}
