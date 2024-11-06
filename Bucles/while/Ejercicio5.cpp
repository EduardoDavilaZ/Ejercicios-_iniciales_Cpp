//Hacer un programa que pida números hasta que la suma de estos supere 50.
//Autor: Sr. Eduardo S. Davila
#include <iostream>
using namespace std;

main(){
	int n, s = 0;
	while (s < 50){
		cout << "Introduce un numero: ";
		cin >> n;
		s = s + n;
	}
}