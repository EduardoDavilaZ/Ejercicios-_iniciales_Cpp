//Visualizar las 30 primeras potencias de 4, es decir, 4 elevado a 1, 4 elevado a 2, 4 elevado a 3 etc.
//Autor: Sr. Eduardo Davila Z.
#include <iostream>
using namespace std;
main(){
	long long p = 1;
	int j=0;
	for (int i=1; i<=30; i++){
		for (j=0; j<=i; j++){
			p = p * 4;
		}
		cout << "4" << " elevado a " << j << " = " << p << endl;
		p = 1; // sin esto, se irá multiplicando con el numero anterior
	}
}