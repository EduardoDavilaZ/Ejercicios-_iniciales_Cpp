//Calcular la suma de los cuadrados de los 100 primeros n�meros naturales.

#include <iostream>
using namespace std;

//Prototipo de funci�n
int calculo (int);

main(){
	int resultado = calculo(1);
	cout << "Resultado: " << resultado << endl;
}

int calculo (int n){
	if (n > 100){
		return 0;
	}
	
	return n * n + calculo(n + 1);
}
