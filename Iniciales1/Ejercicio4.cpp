/*Hacer un programa que calcule el cuadrado de un número. Las variables han de 
ser del tipo entero largo.*/

#include <iostream>
using namespace std;

long long cuadrado(long long*);

main(){
	long long num;
	long long resultado;
	
	cout << "Ingresa el numero" << endl;
	cin >> num;
	resultado = cuadrado(&num);
	cout << "Cuadrado del numero: " << resultado << endl;
}

long long cuadrado(long long* num){
	return (*num) * (*num);
}
