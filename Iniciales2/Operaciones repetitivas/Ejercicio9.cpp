//Elaborar un programa que calcule la suma de los n�meros impares comprendidos entre el 0 y el 100. 

#include <iostream>
using namespace std;

//Prototipo de funci�n
int suma(int);

main(){
	int resultado = 0;
	
	cout << "Suma de los n�meros impares del 0 al 100:" << endl;
	resultado = suma(1);
	cout << "Resultado = " << resultado << endl;
}

int suma (int n){
	if (n > 100){
		return 0;
	}
	return n + suma (n + 2);
}
