//Leer un número entero de tres dígitos y determinar cuántos dígitos primos tiene.

//Autor: Eduardo Davila Z. 

#include <iostream>
using namespace std;

int primos (int);

main() {
	int n;
	do {
        cout << "Introduce un número de 3 digitos: ";
        cin >> n;
    } while (n < 100 || n > 999);
    
	int p = primos(n);
	cout << "El numero " << n << " tiene " << p << " numeros primos" << endl;
}
int primos (int n){
	int p = 0;
	int array[3];
	
	array[0] = n / 100;
	array[1] = (n / 10) % 10;
	array[2] = n % 10;
	
	for (int i=0; i<3; i++){
		if (array[i] == 1 || array[i] == 2 || array[i] == 3 || array[i] == 5 || array[i] == 7){
			p+=1;
		}
	}
	return p;
}