//Leer un número entero y determinar si es negativo. 

#include <iostream>
using namespace std;

bool negativo (int);

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	if (negativo(n)){
		cout << "El numero es negativo" << endl;
	} else {
		cout << "El numero NO es negativo" << endl;
	}
}

bool negativo (int n){
	if (n < 0){
		return true;
	}
	return false;
}
