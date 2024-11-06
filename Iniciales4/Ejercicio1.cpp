//Leer un número entero y determinar si es un número terminado en 4.

#include <iostream>
using namespace std;

bool verificar (int);

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	if (verificar(n)){
		cout << "El numero termina en 4" << endl;
	} else {
		cout << "El numero NO termina en 4" << endl;
	}
}

bool verificar (int n){
	n -= 4;
	if (n % 10 == 0){
		return true;
	}
	return false;
}
