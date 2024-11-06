/*Visualizar los múltiplos de tres que hay entre dos números determinados de una forma
alternativa, es decir, uno si uno no.*/
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int sw = 0, i = 3;
	while (sw != 1){
		cout << i << endl;
		i+=3;
		if (i > 100){	sw = 1;	} 
	}
}