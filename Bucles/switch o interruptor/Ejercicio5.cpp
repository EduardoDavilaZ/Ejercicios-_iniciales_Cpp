/*Introducir dos números inferiores a 50 por teclado. Al más pequeño aumentarlo de 5 en 5
y al mayor disminuirlo de 2 en 2. Visualizar ambas series de números, de forma
alternativa, hasta que el menor supere al mayor.*/
//Autor: Eduardo Davila Z.
#include <iostream>
#define swap(x, y) { int aux=x; x=y; y=aux; }
using namespace std;

main(){
	int a, b, sw = 0;
	do {
		cout << "Introduce un numero (menor a 50): ";
		cin >> a;
		cout << "Introduce otro numero: ";
		cin >> b;
	} while (a > 50 && b > 50);
	if (b > a){	swap(a, b);	} // Ahora 'a' es el mayor
	
	while (sw != 1){
		cout << a << " - " << b << endl;
		a-=2;
		b+=5;
		if (a < b){
			sw = 1;
		}
	}
}