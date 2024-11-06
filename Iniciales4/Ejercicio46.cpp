/*Leer un número entero de 2 dígitos y si terminar en 1 mostrar en pantalla su primer dígito, si
termina en 2 mostrar en pantalla la suma de sus dígitos y si termina en 3 mostrar en pantalla el
producto de sus dos dígitos.*/
#include <iostream>
using namespace std;

main(){
	int n;
	do {
		cout << "Introduce un numero: "; cin >> n;
	} while (n < 10 || n > 99);
	
	int ud = n % 10;
	if (ud == 1){
		cout << n / 10;
	} else if (ud == 2){
		cout << (n/10) + (ud);
	} else if (ud == 3){
		cout << (n/10) * (ud);
	}
}