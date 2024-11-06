//Hacer un programa que pida tres números, y después diga cual de los tres es el mayor.

//Autor: Eduardo Davila Z.

#include <iostream>
using namespace std;

main(){
	int array[3];
	int mayor;
	for (int i=0; i<=2; i++){
		cout << "Introduce un numero: ";
		cin >> array[i];
		if (array[i] > mayor || i == 0){mayor = array[i];} // el primer número será tomado como mayor para compararlo con los demás
	}
	cout << "Num mayor: " << mayor;
}