//Hacer un programa que pida dos números enteros por el teclado y los sume.

#include <iostream>
using namespace std;

//Prototipo de función
int suma(int*, int*);

int main(){
    int num1, num2, sumaf;
    
    cout << "\nPrimer número: "; // visualizar
    cin >> num1; // introducir
    cout << "\nSegundo número: ";
    cin >> num2;
    
    sumaf = suma(&num1, &num2);
    
    cout << "Resultado final: " << sumaf << endl; //endl crea un salto de línea y vacía el buffer

    return 0;
}

int suma(int* num1, int* num2){ 
    return *num1 + *num2; // retorna la suma
}

