/*Leer un número entero y si es múltiplo de 4 mostrar en pantalla su mitad, si es múltiplo de 5
mostrar en pantalla su cuadrado y si es múltiplo e 6 mostrar en pantalla su primer dígito. Asumir
que el número no es mayor que 100.*/

#include <iostream>
using namespace std;

main(){
	int n;
	do{
		cout << "Introduce un numero: "; cin >> n;
	} while (n > 100);
		
	if (n % 4 == 0){
		cout << n / 2;
	} else if (n % 5 == 0){
		cout << n * n;
	} else if (n % 6 == 0){
		cout << n % 10;
	} else {
		cout << "Nada que mostrar." << endl;
	}
}