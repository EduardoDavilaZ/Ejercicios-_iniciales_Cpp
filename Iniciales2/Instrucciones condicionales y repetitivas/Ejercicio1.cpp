//Introducir un n�mero por teclado. Que nos diga si es positivo o negativo.

#include <iostream>
using namespace std;

//Prototipo de funci�n
bool verificacion (int);

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	if (verificacion(n)){
		cout << "Es positivo";
	} else {
		cout << "Es negativo";
	}
}

bool verificacion (int n){
	if (n > 0){
		return true;
	}
	return false;
}
