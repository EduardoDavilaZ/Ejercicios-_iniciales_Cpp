/*Hacer un pseudocódigo que visualice los números del 100 al 0, en orden 
decreciente. */

#include <iostream>
using namespace std;

//Prototipo de funcion
void numeros (int);

main() {
    cout << "Numeros del 100 al 0: " << endl;
    numeros(100);
}

void numeros(int n) {
    if (n < 0) { // si el número es mayor a 100, se detiene
        return;
    }
    cout << n << endl; // endl es un salto de línea
    return numeros(n - 1);
}

