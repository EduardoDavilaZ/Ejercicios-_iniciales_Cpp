//Introducir tantos números como queramos. Decir si son mayores o menores que 
//un número que previamente introduciremos por teclado.

#include <iostream>
using namespace std;

//Prototipo de función
void funcion (int);

main(){
	int lim;
	int n;
	cout << "Introducir el numero a comparar: ";
	cin >> lim;
	funcion (lim);
}

void funcion (int lim){
	int n;
	if (n == 0){
		return;
	}
	
	cout << "Introduce un numero: " << endl;
	cin >> n;
	
	if (n == 0){
		return;
	}
	if (n == lim){
		cout << n << " es igual que " << lim << endl;
	} else if (n > lim){
		cout << n << " es mayor que " << lim << endl;
	} else {
		cout << n << " es menor que " << lim << endl;
	}
	
	return funcion (lim);
}
