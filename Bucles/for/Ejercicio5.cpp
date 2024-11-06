/*Repetir el programa For4, pero en el caso que M < N, intercambie los valores y muestre
los números comprendidos entre ellos.*/
//Autor: Eduardo Davila Z.
#include <iostream>
#define swap(x, y) { int aux=x; x=y; y=aux; }
using namespace std;

main(){
	int n, m;
	cout << "Introduce un numero: ";
	cin >> n;
	cout << "Introduce otro numero: ";
	cin >> m;
	if (m < n){
		swap(m, n);
	}
	for (int i=n; i<=m; i++){
		cout << i << endl;
	}
}