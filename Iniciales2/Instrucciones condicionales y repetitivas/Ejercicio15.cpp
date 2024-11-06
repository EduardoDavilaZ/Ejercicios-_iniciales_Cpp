/*Introducir dos números por teclado de tal forma que el segundo sea mayor que el 
primero. A partir del primero, visualizar los números separados entre sí 7 
unidades, contarlos. De éstos, cuántos son pares y cuánto vale la suma de los 
impares. */

#include <iostream>
using namespace std;

void funcion (int, int, int*, int*, int*);

main(){
	int a, b;
	int pares = 0, suma = 0, contador = 0;
	
	cout << "Introduce el primer numero: ";
	cin >> a;
	cout << "Introduce el segundo numero: ";
	cin >> b;
	
	funcion (a, b, &contador, &pares, &suma);
	
	cout << "Contador: " << contador << endl;
	cout << "Numeros pares: " << pares << endl;
	cout << "Suma de impares: " << suma << endl;
}

void funcion (int a, int b, int* contador, int* pares, int* suma){
	if (a > b){
		return;
	}
	if (a % 2 == 0){
		(*pares)++;
	} else {
		*suma = *suma + a;
	}
	(*contador)++;
	cout << a << endl;
	
	return funcion (a + 7, b, contador, pares, suma);
}
