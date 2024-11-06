/*Introducir dos números por teclado de tal forma que uno sea menor que 50 y el otro
comprendido entre 100 y 200. Al mayor se le restan 3 unidades y al menor se le aumenta
en 7 unidades. Visualizar la secuencia de los números, hasta que se crucen, de forma
alternativa.*/
// Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int a, b, sw = 0;
	do{
		cout << "Introduce un numero: ";
		cin >> a;
	} while (a > 50 || a < 0);
	
	do{
		cout << "Introduce otro numero: ";
		cin >> b;
	} while (b > 200 || b < 100);
	
	while(sw != 1){
		cout << a << " - " << b << endl;
		b-=3;
		a+=7;
		if (a > b){
			sw = 1;
		}
	}
}