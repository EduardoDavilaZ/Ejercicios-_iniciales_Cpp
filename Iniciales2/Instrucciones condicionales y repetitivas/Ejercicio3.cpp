//Visualizar y contar los múltiplos de 3 desde la unidad hasta un número que introduciremos por teclado.

#include <iostream>
using namespace std;

//Prototipo de función
void multiplos (int, int, int*);

main(){
	int n;
	int contador = 0;
	cout << "Multiplos de 3: " << endl;
	cin >> n;
	cout << endl;
	multiplos(0, n, &contador);
	cout << "\nContador: " << contador << endl;
}

void multiplos (int i, int n, int* contador){
	if (i > n){
		return;
	}
	(*contador)++;
	cout << i << endl;
	return multiplos(i + 3, n, contador);
}
