//Sumar los números pares del 2 al 100 e imprimir su valor.

#include <iostream>
using namespace std;

//Prototipo de función
int suma (int);

main(){
	int resultado = suma (2);
	cout << "Suma: " << resultado << endl;
}

int suma (int n){
	if (n > 100){
		return 0;
	}
	if (n % 2 != 0){
		n = n + 1;
	}
	return n + suma (n + 2);
}
