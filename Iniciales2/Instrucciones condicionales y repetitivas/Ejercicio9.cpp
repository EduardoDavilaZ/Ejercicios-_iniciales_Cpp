//Introducir una serie de n�meros. Decir si esos n�meros son mayores o menores de diez. 

#include <iostream>
using namespace std;

//Prototipo de funci�n
void funcion (int);

main(){
	int lim = 10;
	int n;
	funcion (lim);
}

void funcion (int lim){
	int n;
	
	cout << "Introduce un numero: " << endl;
	cin >> n;
	
	if (n == 0){
		return;
	}
	if (n == lim){
		cout << n << " es igual que " << lim << endl;
	} else if (n > lim){
		cout << n << " es mayor que " << lim << endl;
	} else {
		cout << n << " es menor que " << lim << endl;
	}
	
	return funcion (lim);
}
