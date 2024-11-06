//Calcular los múltiplos de 4 comprendidos entre 4 y N, donde N es un valor introducido por teclado. 

#include <iostream>
using namespace std;

void multiplos(int, int, int*);

main(){
	int n, contador = 0;
	cout << "Introducir el limite: ";
	cin >> n;
	cout << endl;
	multiplos(n, 0, &contador);
	cout << "\nContador: " << contador << endl;
}

void multiplos (int n, int i, int* contador){
	if (i > n){
		return;
	}
	cout << i << endl;
	(*contador)++;
	return multiplos (n, i + 4, contador);
}
