//Leer un n�mero entero de tres d�gitos y determinar a cu�nto es igual la suma de sus d�gitos. 

#include <iostream>
using namespace std;

//Prototipo de funci�n
int suma (int, int, int);

main(){
	int n;
	cout << "Introduce un numero de 3 digitos: ";
	cin >> n;
	
	int resultado = suma(n % 10, (n / 10) % 10, n / 100);
	cout << "Resultado: " << resultado << endl;
	
}

int suma (int a, int b, int c){
	return a + b + c;
}
