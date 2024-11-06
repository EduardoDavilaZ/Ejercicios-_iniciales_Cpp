/*Hacer un pseudoc�digo que visualice los n�meros del 100 al 0, en orden 
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
    if (n < 0) { // si el n�mero es mayor a 100, se detiene
        return;
    }
    cout << n << endl; // endl es un salto de l�nea
    return numeros(n - 1);
}

