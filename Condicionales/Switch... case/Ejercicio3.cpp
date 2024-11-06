/*Hacer un programa que pida dos números A, B, y un signo S. Hacer la operación correspondiente
con los números A y B dependiendo de si S= ‘+’, ‘-’, ‘:’ o ‘x’. Si S no es ninguno de estos valores,
el programa ha de mostrar un mensaje avisando que no puede operar los valores.*/

#include <iostream>
using namespace std;

main(){
	int a, b;
	char s[1];
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el operador: ";
	cin >> s;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	switch (s[0]) {
		case '+': cout << "Resultado: " << a+b;
				break;
		case '-': cout << "Resultado: " << a-b;
				break;
		case 'x': cout << "Resultado: " << a*b;
				break;
		case '/': cout << "Resultado: " << a/b;
				break;
		default: cout << "No se pueden operar los valores";
	}
}