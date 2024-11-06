//Leer dos números enteros y determinar cuál es múltiplo de cuál.
#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce un numero: "; cin >> a;
	cout << "Introduce otro numero: "; cin >> b;
	
	a % b == 0 ? cout << a << " es multiplo de " << b : b % a == 0 ? cout << b << " es multiplo de " << a : cout << "No existe relacion";
}