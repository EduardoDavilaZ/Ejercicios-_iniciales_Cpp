//Leer tres números enteros y determinar si el último dígito de los tres números es igual.
#include <iostream>
using namespace std;

main(){
	int array[3];
	for (int i=0; i<=2; i++){
		cout << "Introduce: ";
		cin >> array[i];
	}
	array[2] == array[1] || array[2] == array[0] ? cout << "El ultimo numero es igual al anterior" : cout << "No es igual a ningun numero introducido anteriormente";
}