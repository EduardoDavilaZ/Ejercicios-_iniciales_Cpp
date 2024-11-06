//Leer un número entero de tres dígitos y determinar en qué posición está el mayor dígito.

#include <iostream>
using namespace std;

main(){
	int n;
    do {
        cout << "Introduce un numero de 3 cifras: ";
        cin >> n;
    } while (n < 99 || n > 1000);
	
	mayor (n % 10, (n / 10) % 10, n / 100);
	
}

int mayor (int a, int b, int c){
	
	
}
