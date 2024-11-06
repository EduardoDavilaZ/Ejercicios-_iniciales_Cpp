#include <iostream>
using namespace std;
//Autor: Sr. Eduardo Davila Z.
//Simbolo del pintor austriaco
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	cout << endl;
	for (int i=0; i<=n-1; i++){
		for (int j=0; j<=n-1; j++){
			if (j == (n-1)/2 || i == (n-1)/2 || i==0 && j < (n+1)/2 || i==n-1 && j>((n-1)/2)-1 || j==0 && i>((n-1)/2)-1 || j==n-1 && i<(n+1)/2){
				cout << "*";	
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}