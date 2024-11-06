//Imprimir todos los números primos entre 2 y 1.000 inclusive.
#include <iostream>
using namespace std;

bool esPrimo(int);

int main() {
    for (int i = 2; i <= 1000; i++) {
        if (esPrimo(i)) {
            cout << i << endl;
        }
    }
}

bool esPrimo(int n) {
    if (n <= 1){
    	return false; 
	} 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0){
        	return false;
		}
    }
}