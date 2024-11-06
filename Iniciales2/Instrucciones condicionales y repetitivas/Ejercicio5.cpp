//Visualizar y contar los números que son múltiplos de 2 o de 3 que hay entre 1 y 100.

#include <iostream>
using namespace std;

//Prototipo de funcion
void multiplos (int, int*, int*, int*);

main(){
	int md2 = 0;
	int md3 = 0;
	int md2y3 = 0;
		
	cout << "Numeros multiplos de 2 o 3: " << endl;
	cout << endl;
	multiplos(1, &md2, &md3, &md2y3);
	cout << endl;
	cout << "\nContador de multiplos de 2: " << md2 << endl;
	cout << "Contador de multiplos de 3: " << md3 << endl;
	cout << "Contador de multiplos de 2 y 3: " << md2y3 << endl;
	
}

void multiplos (int n, int* md2, int* md3, int* md2y3){
	if (n > 100){
		return;
	}
	if (n % 2 == 0 && n % 3 == 0){
		cout << n << endl;	
		(*md2)++;
		(*md3)++;
		(*md2y3)++;
	} else if (n % 2 == 0){
		cout << n << endl;	
		(*md2)++;
	} else if (n % 3 == 0){
		cout << n << endl;	
		(*md3)++;	
	}
	
	return multiplos(n + 1, md2, md3, md2y3);
}


