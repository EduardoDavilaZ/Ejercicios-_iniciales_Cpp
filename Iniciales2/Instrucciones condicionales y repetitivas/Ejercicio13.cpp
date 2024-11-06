/*Visualizar, sumar y contar los números, que son a la vez múltiplos de 2 y de 3, 
que hay entre la unidad y un determinado número. */

#include <iostream>
using namespace std;

//Prototipo de funcion
int multiplos (int, int, int*);
int verificar (int);

main(){
	int lim, md2y3 = 0;
	
	cout << "Introduce el limite: " << endl;
	cin >> lim;
	cout << endl;
	multiplos(1, lim, &md2y3);
	cout << endl;
	cout << "Contador de multiplos de 2 y 3: " << md2y3 << endl;
}

int multiplos (int n, int lim, int* md2y3){
	if (n > lim){
		return 0;
	}
	n = verificar(n);
	cout << n << endl;
	(*md2y3)++;
	return n + multiplos(n + 1, lim, md2y3);
}

int verificar (int n){
	if (n % 2 == 0 || n % 3 == 0){
		return n;
	}
	return verificar (n + 1);
}
