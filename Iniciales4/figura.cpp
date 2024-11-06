#include <iostream>
using namespace std;
//AutoR: Sr. Eduardo Davila Z.
//Cuadrado 1:1
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n; cout << endl;
	for (int i=0; i<=n-1; i++){
		for (int j=0; j<=n*2-1; j++){
			j == 0 || i == 0  && j % 2 == 0|| j == n*2-1 || i == n-1 && j % 2 == 0? cout << "*" : cout << " ";
		}
		cout << endl;
	}
}