/*Visualizar, contar y sumar los múltiplos de 10 hasta un cierto número que 
introduciremos por teclado.*/

#include <iostream>
using namespace std;

//Prototipo de función
int multiplos(int, int*);

main(){
	int contador, suma;
	
	cout << "Multiplos de 10: \n" << endl;
	suma = multiplos(0, &contador);
	cout << "\nSuma: " << suma << endl;
}

int multiplos(int n, int* contador){
	if (n > 100){
		return 0;
	}
	(*contador)++;
	cout << n << endl;
	return n + multiplos(n + 10, contador);
}
