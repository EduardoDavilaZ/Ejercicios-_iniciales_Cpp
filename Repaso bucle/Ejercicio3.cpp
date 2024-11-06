//Diseñar el algoritmo para visualizar la suma de los números impares menores o iguales que N.

#include <iostream>
using namespace std;

main(){
	int n, si=0, i;
	cout << "Introducir un numero: ";
	cin >> n;

	for (i=0; i<=n; i++){
		cout << i << endl;
		if (i % 2 != 0){
			si = si + i;
		}
	}
	cout << "Suma impares: " << si;
}