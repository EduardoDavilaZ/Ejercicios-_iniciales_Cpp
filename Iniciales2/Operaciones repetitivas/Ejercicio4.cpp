//Hacer un programa que visualice la suma de los 100 primeros n�meros. 

#include <iostream>
using namespace std;

int suma (int);

main(){
	int resultado = 0;
	cout << "Suma de los 100 primeros numeros: " << endl;
	resultado = suma(1); // empieza desde el 1
	cout << resultado << endl;
}

int suma (int n){
	if (n > 100){
		return 0; // cuando n sea mayor a 100, la funci�n peta
	}
	return n + suma(n + 1);
}
