/*Hacer un programa que pida dos números por el teclado N y M, y si M > N muestre todos
los valores comprendidos entre estos dos números.*/

#include <iostream>
using namespace std;

main(){
	int n, m;
	cout << "Introduce un nuemro: ";
	cin >> n;
	do {
		cout << "Introduce otro numero (mayor al anterior): ";
		cin >> m;
	} while (n > m);
	
	for (int i=n; i<=m; i++){
		cout << i << endl;
	}
}