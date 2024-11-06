//Leer un número entero y determinar si tiene 3 dígitos. 

#include <iostream>
using namespace std;

bool verificar (int);

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	if (verificar(n)){
		cout << "El numero tiene 3 dígitos" << endl;
	} else {
		cout << "El numero NO tiene 3 dígitos" << endl;
	}
}

bool verificar (int n){
	if (n > 99 && n < 1000){
		return true;
	}
	return false;
}
