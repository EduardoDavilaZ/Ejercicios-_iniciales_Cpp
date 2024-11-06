#include <iostream>
using namespace std;
//Autor: Sr. Eduardo Davila Z.
//Estrella 
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	cout << endl;
	for (int i=0; i<=n-1; i++){
		for (int j=0; j<=(n*2)-1; j++){
			int anxo = (n*2) - 1;
			if (j == n+i/2 || j == n-(i/2) || i == (n/2)/2			 || 			j - (n/4) == n*2 - (i*2)+4 || j + (n/4) == i * 2 - 4	) { 
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}