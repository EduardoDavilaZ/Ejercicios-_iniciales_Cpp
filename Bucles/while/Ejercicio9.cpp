/*Hacer un programa que pida números hasta entrar uno divisible por 7; el programa
también ha de terminar cuando la suma de los números entrados sea superior a 25.*/
//Autor: Sr. Eduardo S. Davila
#include <iostream>
using namespace std;

main(){
	int n = 1, s, i = 0;
	while (s < 25 && n % 7 != 0){
		cout << "Introduce un numero: ";
		cin >> n;
		s = s + n;
		i = i + 1;
	}
	cout << "Suma de numeros = " << s << endl;
}