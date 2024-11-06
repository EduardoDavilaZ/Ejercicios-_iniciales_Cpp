//Leer un n�mero entero de tres d�gitos y determinar si al menos dos de sus tres d�gitos son iguales. 

#include <iostream>
using namespace std;

//Prototipo de funci�n
void comparar (int, int, int);

main(){
	int n;
	cout << "Introduce un numero de 3 digitos: ";
	cin >> n;
	comparar(n % 10, (n / 10) % 10, n / 100);
}

void comparar (int a, int b, int c){
	if (a == b){cout << a << " es igual a " << b << endl;}
	if (b == c){cout << b << " es igual a " << c << endl;}
	if (c == a){cout << c << " es igual a " << a << endl;}
}
