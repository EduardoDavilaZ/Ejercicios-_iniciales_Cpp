//Buscar y escribir la primera vocal de una palabra introducida por teclado.
//Autor: Sr. Eduardo Davila Z.
#include <iostream>
using namespace std;

char funcion(char[]);

main(){
	char palabra[10];
	cout << "Introduce una palabra: ";
	cin >> palabra;
	cout << "La primera vocal es: " << funcion(palabra);
}

char funcion (char palabra[]){
	char vocales[]={'a', 'e', 'i', 'o', 'u'};
	for (int i=0; i<=9; i++){
		for (int j=0; j<=4; j++){
			if (palabra[i] == vocales[j]){
				char v = palabra[i];
				return v;
			}
		}
	}
	return 0; //para q no salga el warning
}