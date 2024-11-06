//Hacer un programa que visualice los números impares desde el 100 hasta la 
//unidad y que calcule su suma. 

#include <iostream>
using namespace std;

int impares (int);

main(){
	int suma = 0;
	cout << "Numeros impares del 100 al 0: " << endl;
	suma = impares(100);
	cout << "Suma de los impares: " << suma << endl;
}

int impares(int n){
	if (n % 2 == 0){ // si el número es par, le resta 1 para volverlo impar
		n = n - 1;
	}
	
	if(n < 0){
		return 0; // si el número es menor a 0, la función peta
	}
	
	cout << n << endl;
	
	return n + impares(n - 1);
}
