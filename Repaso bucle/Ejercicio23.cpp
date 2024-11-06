//Averiguar si dados dos números leídos del teclado, uno es divisor del otro.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce un numero: ";
	cin >> a;
	cout << "Introduce otro numero: ";
	cin >> b;
	a % b == 0 ? cout << b << " es divisor de " << a : b % a == 0 ? cout << a << " es divisor de " << b : cout << "Ninguno es divisor de nadie" << endl;
}