//Leer un número entero de cuatro dígitos y determinar a cuanto es igual la suma de sus dígitos.

//Autor: Eduardo Davila Z. 

#include <iostream>
using namespace std;

int suma(int n);

int main() {
    int n;
    do {			
        cout << "Introduce un numero de 4 dígitos: ";
        cin >> n;
    } while (n < 1000 || n > 9999);
    
    int s = suma(n);
    cout << "La suma de los dígitos es: " << s << endl;
    
    return 0;
}

int suma (int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10; //Básicamente s = s + (n % 10)
        n /= 10; //Básicamente n = n/10 
    }
    return s;
}
