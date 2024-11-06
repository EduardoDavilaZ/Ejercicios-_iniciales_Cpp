//Leer un número entero de cuatro dígitos y determinar cuántos dígitos pares tiene.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int n;
	int array[4];
	do{
		cout << "Introduce un numero de 4 digitos: ";
		cin >> n;
	} while (n > 9999 || n < 1000);
	
	array[0] = n / 1000;
	array[1] = (n / 100) % 10;
	array[2] = (n / 10) % 10;
	array[3] = n % 10;
	
	for (int i=0; i<= 3; i++){
		if (array[i] % 2 == 0){
			dp++;
		}
	}
	cout << "El numero tiene " << dp << " digitos pares" << endl;
}