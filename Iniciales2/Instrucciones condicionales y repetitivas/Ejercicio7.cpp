/*Hacer un pseudocódigo que visualice el mayor y el menor de una serie de cinco 
números que vamos introduciendo por teclado. */

#include <iostream>
using namespace std;


main(){
	int n;
	int mayor = 0, menor = 100;
	
	cout << "Introduce 5 numeros: " << endl;
	for (int i=0; i<5; i++){
		cout << "Numero " << i+1 << ": ";
		cin >> n;
		if (n > mayor){
			mayor = n;
		}
		if (n < menor){
			menor = n;
		}
	}
	
	cout << "Numero mayor: " << mayor << endl;
	cout << "Numero menor: " << menor;
}

