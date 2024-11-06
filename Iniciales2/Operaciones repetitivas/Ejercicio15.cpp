/*Introducir un n�mero por teclado menor de 100. Visualizar la suma de los 
cuadrados de los n�meros que est�n separados entre s� 4 posiciones.*/

#include <iostream>
using namespace std;

//Prototipo de funci�n
int funcion (int);

main(){
	int n, contador, suma;
	
	do{
        cout << "Introduce un numero menor a 100: ";
        cin >> n;
        if (n >= 100) {
            cout << "Numero mayor o igual a 100, vuelve a introducir." << endl;
        }
    } while (n >= 100);
	
	suma = funcion(n);
	cout << "\nSuma: " << suma << endl;
}

int funcion (int n){
	if (n > 100){
		return 0;
	}
	return n*n + funcion(n + 4);
}
