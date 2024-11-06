/*Hacer un programa que pida números hasta que se entre un de negativo. La suma de los
números impares no ha de superar 35.*/
// Autor: Sr. Eduardo Davila
#include <iostream>
using namespace std;

main(){
	int n, si;
	do {
		cout << "Introduce un numero: ";
		cin >> n;
		if (n % 2 != 0 || n == 1){
			si = si + n;
		}
	} while (si < 35 && n > 0);
	cout << "Suma de impares: " << si << endl;
}