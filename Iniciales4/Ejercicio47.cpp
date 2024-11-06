/*Leer dos números enteros y si la diferencia entre los dos números es par mostrar en pantalla la
suma de los dígitos de los números, si dicha diferencia es un número primo menor que 10
entonces mostrar en pantalla el producto de los dos números y si la diferencia entre ellos terminar
en 4 mostrar en pantalla todos los dígitos por separado.*/
#include <iostream>
using namespace std;

bool esPrimo(int);

main(){
	int a, b;
	do {
		cout << "Introduce dos numeros menores a 1000" << endl;
		cout << "Primer numero: "; cin >> a;
		cout << "Segundo numero: "; cin >> b;
	} while (a < 0 && a > 1000 && b < 0 && b > 1000);
	
	int d = a - b;
	if ((d) % 2 == 0){
		cout << (a/100) + ((a/10)%10) + (a%10) + (b/100) + ((b/10)%10) + (b%10) << endl;
	} else if (esPrimo(d) == true && a-b < 10){
		cout << (a) * (b);
	}
	
	if ((d % 10) == 4){
		cout << (a/100); cout << ((a/10)%10); cout << (a%10); cout << (b/100); cout << ((b/10)%10); cout << (b%10);
	}
}

bool esPrimo(int n){
	if (n < 2){
		return false;
	}
	int i=2;
	while (i <= n && n % i != 0){
		i++;
	}
	return i==n ? true : false;
}