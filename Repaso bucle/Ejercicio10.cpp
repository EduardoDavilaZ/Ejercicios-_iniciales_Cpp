//Calcular el valor máximo de una serie de 100 números.
#include <iostream>
using namespace std;

main(){
	int max = 0;
	int n=1;
	while (n != 0){
		cout << "Introduce un numero: ";
		cin >> n;
		if (n > max){
			max = n;
		}
	}
	cout << "Numero maximo: " << max;
}