//Leer un número entero de dos dígitos y determinar si es primo y además si es negativo.

#include <iostream>
using namespace std;

//Prototipo de función
bool esPrimo (int);

main() {
    int n;
    do {
        cout << "Introduce un numero: ";
        cin >> n;
        if (esPrimo(n)) {
            cout << "Es primo" << endl;
        } else {
            cout << "No es primo" << endl;
        }
        if (n < 0) {
            cout << "Es negativo" << endl;
        } else {
            cout << "No es negativo" << endl;
        }
    } while (n > 9 && n < 100);
}

bool esPrimo(int n) {
    if (n < 2) {
        return false; 
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}
