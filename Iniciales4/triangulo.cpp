#include <iostream>
using namespace std;
//Autor: Sr. Eduardo Davila Z.
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	for (int i=0; i<=n-1; i++){
		for (int j=1; j<=(n*2)-1; j++){
			j == n+i || j == n-i || i == n-1 ? cout << "*" : cout << " ";
		}
		cout << endl;
	}
}