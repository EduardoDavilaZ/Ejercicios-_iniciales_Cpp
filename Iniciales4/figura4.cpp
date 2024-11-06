#include <iostream>
using namespace std;
//Autor: Sr. Eduardo Davila Z.
//Casa con balcón
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n;
	cout << endl;
	for (int i=0; i<=n-1; i++){
		for (int j=1; j<=(n*4)-1; j++){
			j == (n+i)*2 || j == (n-i)*2 || i == (n-1) && j % 2 == 0 ? cout << "*" : cout << " ";
		}
		cout << endl;
	}
	for (int i=0; i<=n-1; i++){
		for (int j=1; j<=(n*4)-1; j++){
			int p = n * 4 * 20 / 100; //porta
			j == n || j == n*3 || i == n-1 && (j > n && j < n*3) || i > n / 2 && (j == n + p || j == n*3 - p) || i == n/2 &&(j > n+p && j< n*3-p) || i< n/2-2 &&  (j == n + p*2 || j == n*3 - p*2) ||  i== n/4 + 1 && (j > n/2+2 + p && j < n*3-p/2) ? cout << "*" : cout << " ";
		}
		cout << endl;
	}
}