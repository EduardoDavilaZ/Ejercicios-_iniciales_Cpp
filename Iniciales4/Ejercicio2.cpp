//Leer un n�mero entero y determinar si tiene 3 d�gitos. 

#include <iostream>
using namespace std;

bool verificar (int);

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	if (verificar(n)){
		cout << "El numero tiene 3 d�gitos" << endl;
	} else {
		cout << "El numero NO tiene 3 d�gitos" << endl;
	}
}

bool verificar (int n){
	if (n > 99 && n < 1000){
		return true;
	}
	return false;
}
