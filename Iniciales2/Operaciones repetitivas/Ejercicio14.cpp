//Calcular la suma de los cuadrados de los números pares entre el 0 y el 100. 

#include <iostream>
using namespace std;

//Prototipo de función
int suma(int);

main(){
	int resultado;
	
	cout << "Suma de los cuadrados de los numeros pares del 0 al 100: " << endl;
	resultado = suma(0);
	cout << "Resultado: " << resultado << endl;
}

int suma(int n){
	if (n > 100){
		return 0;
	}
	
	return n*n + suma (n + 2);
}
