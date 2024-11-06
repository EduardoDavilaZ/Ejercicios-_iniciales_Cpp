//Visualizar 10 veces, de forma alternativa, Hola y Adiós.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int sw = 0, c = 0;
	while (sw == 0){
		cout << "Hola" << endl;
		cout << "Adios" << endl;
		c++;
		if (c == 10){ sw = 1; };
	}
}