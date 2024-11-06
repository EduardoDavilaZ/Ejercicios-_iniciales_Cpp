//Visualizar y contar los números que hay del 1 al 100, excepto los múltiplos de 2. 

#include <iostream>
using namespace std;

//Prototipo de función
void funcion (int, int*);

main(){
	int contador = 0;
	
	cout << "Contar los números que hay del 1 al 100: " << endl;
	funcion(0, &contador);
	cout << endl;
	cout << "Contador de los numeros no multiplos de 2: " << contador << endl;
}

void funcion(int n, int* contador){
	if (n > 100){
		return;
	}
	if (n % 2 != 0){
		n += 1;
	}
	(*contador)++;
	cout << n << endl;
	return funcion (n + 2, contador);
}
