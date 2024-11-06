/*Determinar la media de una lista indefinida de números positivos, terminados con un número negativo.*/
#include <iostream>
using namespace std;

main(){
	float n = 1, s = 0, c = 0;
	while (n > 0){
		cout << "Introduce un numero: ";
		cin >> n;
		if (n > 0){
			s = s + n;
			c++;
		}
	}
	float m = s/c;
	cout << "Media: " << m;
}