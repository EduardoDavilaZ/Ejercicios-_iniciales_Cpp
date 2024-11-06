//Leer un número entero menor que mil y determinar cuántos dígitos tiene.
#include <iostream>
using namespace std;

main(){
	int n, d;
	int array[3];
	do{
		cout << "Introduce un numero: ";
		cin >> n;
	} while (n > 1000);
	
	array[0] = (n / 100) % 10;
	array[1] = (n / 10) % 10;
	array[2] = n % 10;
	
	for (int i=0; i<=2; i++){
		if (array[i] != 0){		d++;	}
	}
	
	cout << "El numero " << n << " tiene " << d << " digitos." << endl;
}