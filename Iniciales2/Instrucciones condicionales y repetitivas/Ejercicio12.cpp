/*Visualizar y sumar los n�meros desde el cero hasta un n�mero determinado, 
excepto los m�ltiplos de 5. Visualizar el valor de la suma de los m�ltiplos de 5. */

#include <iostream>
using namespace std;

//Prototipo de funci�n
int suma (int, int);
int verificar (int);

main(){
	int lim, resultado;
	cout << "Introduce el limite: ";
	cin >> lim;
	resultado = suma(0, lim);
	cout << "Resultado: " << resultado << endl;
}

int suma (int n, int lim){
	if (n > lim){
		return 0;
	}
	n = verificar(n);
	cout << n << endl;
	return n + suma (n + 5, lim);
}

int verificar(int n){
	if (n % 5 == 0){
		return n;
	}
	return verificar (n + 1);
}


