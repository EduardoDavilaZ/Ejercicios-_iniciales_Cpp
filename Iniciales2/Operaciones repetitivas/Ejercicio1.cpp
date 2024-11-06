/*Hacer un pseudocódigo que visualice los números del 0 al 100. */

#include <iostream>
using namespace std;

//Prototipo de funcion
void numeros (int);

main() {
    cout << "Numeros del 0 al 100: " << endl;
    numeros(0);
}

void numeros(int n) {
    if (n > 100) { // si el número es mayor a 100, se detiene
        return;
    }
    cout << n << endl; // endl es un salto de línea
    return numeros(n + 1);
}

