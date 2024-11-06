/*Hacer un programa que visualice, sume y cuente los números pares entre dos números
determinados, de una forma alternativa.*/
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int sw = 0, i = 2, s, c = 0;
	while (sw != 1){
		cout << i << endl;
		s = s + i;
		c++;
		i+=2;
		if (i > 100){	sw = 1;	} 
	}
	cout << "Suma: " << s << endl;
	cout << "Contador: " << c << endl;
}