/*Calcular y visualizar la suma y el producto de los números pares comprendidos 
entre 20 y 400 ambos inclusive.*/

#include <iostream>
using namespace std;

int main() {
    int s = 0;  // Inicializamos la suma en 0
    int i = 20;
    int p = 1;  // Inicializamos el producto en 1

    while (i <= 400) {
        if (i % 2 == 0) {  // Si es par
            p = p * i;      // Multiplicamos el producto por el número actual
            s = s + i;      // Sumamos el número actual
        }
        i++;
    }

    cout << "Suma: " << s << endl;
    cout << "Producto: " << p << endl;
    return 0;
}

