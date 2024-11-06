//Hacer un programa que muestre los 100 primeros números primos.
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	int i=0, p=0;
	while (p <= 100){
		if (esPrimo(i) == true){
			cout << i << endl;
			p++;
		}
		i++;
	}
}

bool esPrimo(int n){
	if (n < 2){
		return false;
	}
	int i = 2;
	while (i < n && n % i != 0){
		i++;
	}
	return i==n ? true : false;
}