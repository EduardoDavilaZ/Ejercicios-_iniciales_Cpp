//Hacer un programa que muestre los números primos del 1 al 100.
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	for (int i=0; i<= 100; i++){
		if (esPrimo(i) == true){
			cout << i << endl;
		}
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