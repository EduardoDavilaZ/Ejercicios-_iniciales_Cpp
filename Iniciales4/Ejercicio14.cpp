//Leer dos n�meros enteros de dos d�gitos y determinar a cu�nto es igual la suma de todos los d�gitos. 

#include <iostream>
using namespace std;

//Prototipo de funci�n
int suma (int, int, int, int);

main(){
	int a, b, resultado = 0;
	cout << "Introduce 2 numeros de dos digitos: " << endl;
	cout << "Primer numero: ";
	cin >> a;
	cout << "Segundo numero: ";
	cin >> b;
	
	resultado = suma(a % 10, b % 10, (a / 10) % 10, (b / 10) % 10);
	cout << "La suma de todos los digitos es: " << resultado;
}

int suma (int a, int b, int c, int d){
	return a + b + c + d;
}

