/*Visualizar, contar y sumar los m�ltiplos de 10 hasta un cierto n�mero que 
introduciremos por teclado.*/

#include <iostream>
using namespace std;

//Prototipo de funci�n
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
