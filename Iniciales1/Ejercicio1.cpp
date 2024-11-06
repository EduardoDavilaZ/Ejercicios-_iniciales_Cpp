//Hacer un programa que pida dos n�meros enteros por el teclado y los sume.

#include <iostream>
using namespace std;

//Prototipo de funci�n
int suma(int*, int*);

int main(){
    int num1, num2, sumaf;
    
    cout << "\nPrimer n�mero: "; // visualizar
    cin >> num1; // introducir
    cout << "\nSegundo n�mero: ";
    cin >> num2;
    
    sumaf = suma(&num1, &num2);
    
    cout << "Resultado final: " << sumaf << endl; //endl crea un salto de l�nea y vac�a el buffer

    return 0;
}

int suma(int* num1, int* num2){ 
    return *num1 + *num2; // retorna la suma
}

