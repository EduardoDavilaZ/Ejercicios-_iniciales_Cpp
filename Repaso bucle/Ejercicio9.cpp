//Leer sucesivamente números de teclado hasta que aparezca un número comprendido entre 1 y 5.
#include <iostream>
using namespace std;

main(){
	int n;
	do{
		cout << "Introduce un numero: ";
		cin >> n;
	} while (n > 5 || n < 1);
}