#include <iostream>
using namespace std;
//Autor: Sr. Eduardo Davila Z.
//Estrella de DAvid
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	for (int i=0; i<=n-1 + (n-2)/2; i++){
		for (int j=1; j<=(n*2)-1; j++){
			int anxo = (n*2) - 1;
			(j == n+i || j == n-i || i == n-1) || (j + (n-2)/2 == i  || j - (n-2)/2 == anxo - i || i == (n-2)/2) ? cout << "*" : cout << " ";
		}
		cout << endl;
	}
}