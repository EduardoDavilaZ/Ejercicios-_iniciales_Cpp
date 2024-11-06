/*Hacer un programa que pida dos números por el teclado, si el primer número es divisible por el
segundo, los ha de sumar, sino, los ha de multiplicar.*/

#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce un numero: "; cin >> a; 
	cout << "Introduce otro numero: "; cin >> b;
	a % b == 0 ? cout << "Resultado = " << a+b : cout << "Resultado = " << a*b;
}