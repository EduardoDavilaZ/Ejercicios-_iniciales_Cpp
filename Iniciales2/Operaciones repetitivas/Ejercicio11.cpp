//Visualizar, contar y sumar los m�ltiplos de 2 hasta un n�mero que introducimos por teclado. 

#include <iostream>
using namespace std;

//Prototipo de funci�n
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








