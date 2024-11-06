//Hacer un pseudocódigo que visualice todos los números naturales que hay desde 
//la unidad hasta un número que introducimos por teclado.

#include <iostream>
using namespace std;

//Prototipo de función
void numeros (int, int);

main(){
	int inicio = 0;
	int fin = 0; // límite
	
	cout << "Introduce el límite: " << endl;
	cin >> fin;
	cout << endl;
	numeros(inicio, fin);
	
}

void numeros (int inicio, int fin){
	if (inicio > fin){
		return;
	}
	cout << inicio << endl;
	return numeros(inicio + 1, fin);
}
