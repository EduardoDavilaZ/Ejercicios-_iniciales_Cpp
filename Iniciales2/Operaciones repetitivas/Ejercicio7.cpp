//Hacer un pseudoc�digo que visualice todos los n�meros naturales que hay desde 
//la unidad hasta un n�mero que introducimos por teclado.

#include <iostream>
using namespace std;

//Prototipo de funci�n
void numeros (int, int);

main(){
	int inicio = 0;
	int fin = 0; // l�mite
	
	cout << "Introduce el l�mite: " << endl;
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
