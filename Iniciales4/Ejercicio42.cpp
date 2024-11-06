//Leer dos números enteros y determinar si la diferencia entre los dos es un número par.
#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce un numero: "; cin >> a;
	cout << "Introduce otro numero: "; cin >> b;
	(a - b) % 2 == 0 ? cout << "La diferencia es par" : cout << "La diferencia NO es par";
}