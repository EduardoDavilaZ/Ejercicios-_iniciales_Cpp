//Leer un número entero de cinco dígitos y determinar si es un número capicúo. Ej. 15651,59895.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int n;
	int array[4];
	do{
		cout << "Introduce un numero de 5 digitos: ";
		cin >> n;
	} while (n > 99999 || n < 10000);
	
	array[0] = n / 10000;
	array[1] = (n / 1000) % 10;
	array[2] = (n / 100) % 10;
	array[3] = (n / 10) % 10;
	array[4] = n % 10;
	
	int i=0, c=0;
	while (i <= 4){
		if (array[i] != array[4-i]){
			c++;
		}
		i++;
	}
	c == 0 ? cout << "El numero es capicuo" : cout << "El numero no es capicuo";
}