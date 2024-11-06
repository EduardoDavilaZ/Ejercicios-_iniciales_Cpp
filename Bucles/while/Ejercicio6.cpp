//Hacer un programa que pida caracteres hasta que el número de As entradas sea superior a 5.
//Autor: Sr. Eduardo S. Davila
#include <iostream>
using namespace std;

main(){
	char c;
	int a;
	while (a <= 5){
		cout << "Introduce una letra: ";
		cin >> c;
		if (c == 'a'){	a++;	}
	}
}