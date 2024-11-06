//Hacer un programa que pida números hasta que la suma de los pares sea superior a 50.
// Autor: Sr. Eduardo Davila
#include <iostream>
using namespace std;

main(){
	int n, sp;
	do {
		cout << "Introduce un numero: ";
		cin >> n;
		if (n % 2 == 0){
			sp = sp + n;
		}
	} while (sp < 50);
	cout << "Suma de pares: " << sp << endl;
}