//Visualizar y contar los números que son múltiplos de 2 y de 3 que hay del 1 al 100

#include <iostream>
using namespace std;

//Prototipo de funcion
void multiplos (int, int*);

main(){
	int md2y3 = 0;
		
	cout << "Numeros multiplos de 2 y 3: " << endl;
	cout << endl;
	multiplos(1, &md2y3);
	cout << endl;
	cout << "\nContador de multiplos de 2 y 3: " << md2y3 << endl;
	
}

void multiplos (int n, int* md2y3){
	if (n > 100){
		return;
	}
	if (n % 2 == 0 && n % 3 == 0){
		cout << n << endl;
		(*md2y3)++;
	}
	return multiplos(n + 1, md2y3);
}



