/*Leer un número entero de 4 dígitos y determinar si el primer dígito es múltiplo de alguno de los
otros dígitos.*/
#include <iostream>
using namespace std;

main(){
	int array[4];
	int n;
	do {
		cout << "Introduce un numero de 4 digitos: "; cin >> n;
	} while (n > 9999 || n < 1000);
	array[0] = n / 1000;
	array[1] = (n / 100) % 10;
	array[2] = (n / 10) % 10;
	array[3] = n % 10;

	for (int i=1; i<=3; i++){
		if (array[0] % array[i] == 0){
			cout << array[0] << " es multiplo de " << array[i] << endl;
		}
	}
	
}