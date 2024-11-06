/*Hacer un programa que pida tres números N, M y Z. Mostrar todos los valores
comprendidos entre N y M con un intervalo Z. Si M < N, antes se habrán de intercambiar
los valores.*/

#include <iostream>
using namespace std;

main(){
	int n, m, z;
	cout << "Primer numero: ";
	cin >> n;
	cout << "Segundo numero: ";
	cin >> m;
	cout << "Intervalo: ";
	cin >> z;
	for (int i=n; i<=m; i+=z){
		cout << i << endl;
	}
}