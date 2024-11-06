//Leer tres números enteros y determina si el penúltimo dígito de los tres números es igual.
#include <iostream>
using namespace std;

main(){
	int array[3];
	for (int i=0; i<=2; i++){
		cout << "Introduce: ";
		cin >> array[i];
	}
	array[1] == array[1] || array[1] == array[2] ? cout << "El penultimo numero es igual al anterior" : cout << "No es igual a ningun numero introducido anteriormente";
}