//Leer dos números enteros y determinar cuál es el mayor.

#include <iostream>
using namespace std;

//Prototipo de función
void comparacion(int, int);

main(){
	int a, b;
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	comparacion(a, b);
}

void comparacion (int a, int b){
	if (a > b){
		cout << a << " es el mayor" << endl;
	} else if (b > a) {
		cout << b << " es el mayor" << endl;
	} else {
		cout << a << " y " << b << " son iguales" << endl;
	}	
}
