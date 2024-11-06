//Visualizar, contar y sumar los múltiplos de 2 hasta un número que introducimos por teclado. 

#include <iostream>
using namespace std;

//Prototipo de función
int multiplos(int, int*);

main(){
	int suma;
	int contador = 0;
	 
	cout << "Multiplos de 2: \n" << endl;
	suma = multiplos (0, &contador);
	cout << "\nSuma: " << suma << endl;
}

int multiplos (int n, int* contador){
	if (n > 100){
		return 0;
	}
	if (n % 2 != 0){
		n = n + 1;
	}
	(*contador)++;
	cout << n << endl;
	return n + multiplos (n + 2, contador);
}








