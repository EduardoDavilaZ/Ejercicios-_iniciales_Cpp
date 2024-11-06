//Hacer un programa que pida números hasta que la suma de los divisibles por 6 y 3 supere 30.
//Autor: Sr. Eduardo S. Davila
#include <iostream>
using namespace std;

main(){
	int n, d;
	while (d < 30){
		cout << "Introduce un numero: ";
		cin >> n;
		if (n % 3 == 0 || n % 6 == 0){	d = d + n;	}
	}
}