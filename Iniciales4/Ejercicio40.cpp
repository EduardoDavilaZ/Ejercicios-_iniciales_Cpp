/*Leer dos números enteros y si la diferencia entre los dos es menor o igual a 10 entonces
mostrar en pantalla todos los enteros comprendidos entre el menor y el mayor de los números
leídos.*/
#include <iostream>
#define swap(x,y){int aux=x; x=y; y=aux;}
using namespace std;

main() {
    int a, b;
    cout << "Introduce el primer numero: "; cin >> a;
    cout << "Introduce el segundo numero: "; cin >> b;
    if (b > a) {swap(a, b);}
    if (a - b >= 10) {
        for (int i = b; i <= a; i++) {
            cout << i << endl;
        }
    } else {cout << "La diferencia no supera el 10";}
}