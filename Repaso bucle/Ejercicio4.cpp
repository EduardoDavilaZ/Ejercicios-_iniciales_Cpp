//Dado dos números enteros, realizar el algoritmo que calcule el cociente y el resto.
#include <iostream>
using namespace std;

main(){
	int a, b;
	cout << "Introduce un numero: ";
	cin >> a;
	cout << "Introduce otro numero: ";
	cin >> b;
	
	cout << "Cociente: " << a/b << endl;
	cout << "Resto:  " << a%b << endl;
}