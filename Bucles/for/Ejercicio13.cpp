//Hacer un programa que dado un valor N, muestre la figura siguiente:
// Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int n;
	cout << "Introduce un numero: ";
	cin >> n;
	
	for (int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
			cout << "*";	
		}
		cout << endl;
	}
}