/*Introducir un número por teclado menor de 500. Visualizar, sumar y contar los 
números que están separados entre sí 8 posiciones, desde ese número al 500. */

#include <iostream>
using namespace std;

int funcion (int, int*);

main(){
	int n, contador, suma;
	
	do{
        cout << "Introduce un numero menor a 500: ";
        cin >> n;
        if (n >= 100) {
            cout << "Numero mayor o igual a 500, vuelve a introducir." << endl;
        }
    } while (n >= 100);
	
	suma = funcion(n, &contador);
	cout << "\nSuma: " << suma << endl;
}

int funcion (int n, int* contador){
	if (n > 500){
		return 0;
	}
	(*contador)++;
	cout << n << endl;
	return n + funcion(n + 8, contador);
}
