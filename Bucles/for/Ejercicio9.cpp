//Hacer un programa que muestre los números del 1 al 200 que sean divisibles por 2 y 3.
//Autor: Sr. Eduardo Davila Z.

#include <iostream>
using namespace std;

main(){
	for (int i=1; i<= 200; i++){
		if (i % 2 == 0 && i % 3 == 0){
			cout << i << endl;
		}
	}
}