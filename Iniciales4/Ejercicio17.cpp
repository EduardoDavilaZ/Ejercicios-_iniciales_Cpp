//Leer un n�mero entero de tres d�gitos y determinar en qu� posici�n est� el mayor d�gito.

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
