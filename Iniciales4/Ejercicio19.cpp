//Leer tres n�meros enteros y determinar cu�l es el mayor. Usar solamente dos variables.

#include <iostream>
using namespace std;

//Prototipo de funci�n
int mayor(void);

main(){
	cout << "Introduce 3 numeros enteros: " << endl;
	int num = mayor();
	cout << "Numero mayor: " << num << endl;
}

int mayor (void){
	int n, mayor = 0; // 2 variables
	for (int i=0; i<3; i++){
		cout << "Introducir numero: ";
		cin >> n;
		if (n > mayor){
			mayor = n;
		}
	}
	return mayor;
}


