/*Leer dos números enteros y determinar si la diferencia entre los dos es un número divisor
exacto de alguno de los dos números.*/
#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce un numero: "; cin >> a;
	cout << "Introduce otro numero: "; cin >> b;
	int d = a - b;
	a % d == 0 ? cout << d << " es divisor de " << a : b % d == 0 ? cout << d << " es divisor de " << b : cout << "La diferencia no es divisor de ninguno de los numeros introducidos"; 
}