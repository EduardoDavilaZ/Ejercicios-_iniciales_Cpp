//Leer un número entero de tres dígitos y determinar a cuánto es igual la suma de sus dígitos. 

#include <iostream>
using namespace std;

//Prototipo de función
int suma (int, int, int);

main(){
	int n;
	cout << "Introduce un numero de 3 digitos: ";
	cin >> n;
	
	int resultado = suma(n % 10, (n / 10) % 10, n / 100);
	cout << "Resultado: " << resultado << endl;
	
}

int suma (int a, int b, int c){
	return a + b + c;
}
