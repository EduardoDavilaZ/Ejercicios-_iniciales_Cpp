//Introducir un número por teclado. Que os diga si es par o impar. 

#include <iostream>
using namespace std;

//Prototipo de función
bool esPar (int);

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	if (esPar(n)){
		cout << "Es par";
	} else {
		cout << "Es impar";
	}
}

bool esPar (int n){
	if (n % 2 == 0){
		return true;
	}
	return false;
}
