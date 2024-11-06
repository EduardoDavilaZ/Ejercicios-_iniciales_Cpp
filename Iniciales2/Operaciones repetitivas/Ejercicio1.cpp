/*Hacer un pseudoc�digo que visualice los n�meros del 0 al 100. */

#include <iostream>
using namespace std;

//Prototipo de funcion
void numeros (int);

main() {
    cout << "Numeros del 0 al 100: " << endl;
    numeros(0);
}

void numeros(int n) {
    if (n > 100) { // si el n�mero es mayor a 100, se detiene
        return;
    }
    cout << n << endl; // endl es un salto de l�nea
    return numeros(n + 1);
}

