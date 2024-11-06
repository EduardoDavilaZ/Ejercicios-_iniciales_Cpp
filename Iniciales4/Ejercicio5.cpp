//Leer un n�mero entero de dos d�gitos y determinar si ambos d�gitos son pares. 

#include <iostream>
using namespace std;

//Prototipo de funci�n
void funcion (int, int, int*);

main(){
	int n, contador = 0, suma = 0;
	do{
		cout << "Introduce un numero de 2 digitos: ";
		cin >> n;
		funcion(n, 0, &contador);
		contador -= 1;
		if (contador % 2 == 0 && (n - (contador*10)) % 2 == 0)    {
			cout << "Ambos digitos son pares" << endl;
		} else {
			cout << "Ambos digitos NO son pares" << endl;
		}
		contador = 0, suma = 0;
	} while (n > 9 && n < 100);		// asegurarse que solo se puedan introducir n�meros de 2 d�gitos
}

void funcion (int n, int i, int* contador){
	if (i > n){
		return;
	}
	(*contador)++;
	return funcion (n, i + 10, contador);
}
