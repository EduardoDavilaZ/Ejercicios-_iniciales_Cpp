//Leer dos números enteros de dos dígitos y determinar si tienen dígitos comunes. 

#include <iostream>
using namespace std;

//Prototipo de función
void funcion (int, int, int*);

main(){
	int a, b, cont1 = 0, cont2 = 0, dcomunes = 0;
	do{
		cout << "Introduce un numero de 2 digitos: ";
		cin >> a;
		cout << "Introduce otro numero de 2 digitos: ";
		cin >> b;
		funcion(a, 0, &cont1);
		funcion(b, 0, &cont2);
		cont1 -= 1;
		cont2 -= 1;
		int digito2a = a - (cont1*10);
		int digito2b = b - (cont2*10);
		
		if (cont1 == cont2){ dcomunes++; };
		if (cont1 == digito2a){ dcomunes++; };
		if (cont1 == digito2b){ dcomunes++; };
		if (cont2 == digito2a){ dcomunes++; };
		if (cont2 == digito2b){ dcomunes++; };
		if (digito2a == digito2b){ dcomunes++; };
		
		cout << "Hay " << dcomunes << " digitos en comun." << endl;
		
		cont1 = 0, cont2 = 0, dcomunes = 0;
	} while (a > 9 && a < 100 && b > 9 && b < 100);
}

void funcion (int n, int i, int* contador){
	if (i > n){
		return;
	}
	(*contador)++;
	return funcion (n, i + 10, contador);
}
