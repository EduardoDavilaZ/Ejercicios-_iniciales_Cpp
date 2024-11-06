//Leer un n�mero entero de tres d�gitos y determinar si alg�n d�gito es m�ltiplo de los otros.

#include <iostream>
using namespace std;

//Prototipo de funci�n
bool esMultiplo(int, int);

main(){
	int n;
	do{
		cout << "Introduce un numero de 3 digitos: ";
		cin >> n;
        
        int digito1 = n % 10; // unidad
        int digito2 = (n / 10) % 10; // decena
        int digito3 = n / 100; // centena
		
		if (esMultiplo(digito1, digito2)) {cout << digito1 << " es multiplo de " << digito2 << endl;} 
		if (esMultiplo(digito2, digito3)){cout << digito2 << " es multiplo de " << digito3 << endl;}
		if (esMultiplo(digito3, digito1)){cout << digito3 << " es multiplo de " << digito1 << endl;}
		if (esMultiplo(digito2, digito1)) {cout << digito2 << " es multiplo de " << digito1 << endl;} 
		if (esMultiplo(digito3, digito2)){cout << digito3 << " es multiplo de " << digito2 << endl;}
		if (esMultiplo(digito1, digito3)){cout << digito1 << " es multiplo de " << digito3 << endl;}		
	} while (n > 99 && n < 1000);
}

bool esMultiplo(int a, int b) {
    if (a % b == 0) {return true;}
    return false;
}
