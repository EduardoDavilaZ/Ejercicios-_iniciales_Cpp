//Leer un número entero de 4 dígitos y determinar si tiene mas dígitos pares o impares.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int n;
	int array[4];
	int cp, ci = 0;
	do {
		cout << "Introduce u numero de 4 digitos: ";
		cin >> n;
	} while (n < 1000 || n > 9999);
	array[0] = n / 1000;
	array[1] = (n / 100) % 10;
	array[2] = (n / 10) % 10;
	array[3] = n % 10;
	for (int i=0; i<=3; i++){
		array[i] % 2 == 0 ? cp++ : ci++;
	}
	cout << "Contador pares: " << cp << endl;
	cout << "Contador impares: " << ci;
}