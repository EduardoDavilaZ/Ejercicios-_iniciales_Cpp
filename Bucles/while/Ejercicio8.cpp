/*Hacer un programa que pida números hasta que se entre un cero; el programa ha de dejar
entrar un máximo de 10 números. Sumar los divisibles por 3.*/
//Autor: Sr. Eduardo S. Davila
#include <iostream>
using namespace std;

main(){
	int n = 1, s, i = 0;
	while (i < 5 && n != 0){
		cout << "Introduce un numero: ";
		cin >> n;
		if (n % 3 == 0){	s = s + n;	}
		i = i + 1;
	}
	cout << "Suma de numeros divisibles entre 3 = " << s << endl;
}