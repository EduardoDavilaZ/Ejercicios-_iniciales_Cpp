//Dados dos números visualizar sus tablas de multiplicar de forma alternativa.
// Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int a, b, sw = 0;
	
	cout << "Introduce un numero: ";
	cin >> a;
	do{
		cout << "Introduce otro numero: ";
		cin >> b;
	} while(a > b);
	
	while (sw != 1){
		cout << a << " x " << b << " = " << a*b << endl;;
		if (a == b){
			sw = 1;
		}
		a+=1;
	}
}