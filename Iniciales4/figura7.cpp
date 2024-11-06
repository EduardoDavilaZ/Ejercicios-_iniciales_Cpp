#include <iostream>
using namespace std;
//AutoR: Sr. Eduardo Davila Z.
//Cubo
main(){
	int n;
	cout << "Introduce un numero: "; cin >> n; cout << endl;
	int p = n * 30 / 100;
	for (int i=0; i<=n-1; i++){
		for (int j=0; j<=n*2-1; j++){
			if (i == 0	&& i > j - n - p || j == 0 && i < n - p	/*|| i ==  n - p && j < ((n-1)*2 - p * 2)-1 *//*&& j < n /2 + 2*//*|| j == n + p && i < n - p*/){ // cuadrado externo
				cout << "*";
			}else if (i == p && i < j - p || j == p * 2 && j < i + p + 1 || i ==  n - 1  && j > p * 2	|| j == n * 2 - 1 && i > p) {	// cuadrado interno									
				cout << "*";
			} else if (j + p == i*2 + p && i < p || j + n - p - 1 == i*2 + n*2 || i < n*2 - p && j + n + p == i * 2 - 2) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
}