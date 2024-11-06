//Calcular la suma de los N primeros números enteros utilizando la estructura PARA.
#include <iostream>
using namespace std;

main(){
	int s, n;
	cout << "Introduce la cantidad de numeros: ";
	cin >> n;
	for (int i=1; i<=n; i+=1){
		s = s + i;
	}
	cout << "Suma: " << s;;
}