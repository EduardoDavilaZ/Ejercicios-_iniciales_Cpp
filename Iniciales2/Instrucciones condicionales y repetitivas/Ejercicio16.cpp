/*Introducir una cantidad por teclado. Si es menor de 500, sumarle el 50 por 100; si 
es mayor o igual a 500 pero menor de 1 000, sumarie el 7 por 100; si es mayor o 
igual a 1000 y menor o igual a 5000, sumarle el 15 por 100, y si es mayor de 
5000, restarle el 5 por 100.*/

#include <iostream>
using namespace std;

int calcular (int);

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	cout << "Resultado: " << calcular(n) << endl;
}

int calcular (int n){
	if (n < 500){
		return n + ((n * 50) / 100);
	} else if (n >= 500 && n < 1000){
		return n + ((n * 7) / 100);
	} else if (n >= 1000 && n <= 5000){
		return n + ((n * 15) / 100);
	} else {
		return n - ((n * 5) / 100);
	}
	return 0;
}
