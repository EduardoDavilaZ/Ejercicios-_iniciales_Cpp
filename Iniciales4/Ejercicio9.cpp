//Leer un número entero de dos dígitos y determinar si un dígito es múltiplo del otro.

#include <iostream>
using namespace std;

//Prototipo de función
bool esMultiplo(int, int);

main(){
	int n;
	do{
		cout << "Introduce un numero de 2 digitos: ";
		cin >> n;
		int digito1 = n % 10; // unidad
        int digito2 = (n / 10) % 10; // decena
        
		if (esMultiplo(digito1, digito2)) {
			cout << digito1 << " es multiplo de " << digito2 << endl;
		} 
		if (esMultiplo(digito2, digito1)){
			cout << digito2 << " es multiplo de " << digito1 << endl;
		}
	} while (n > 9 && n < 100);
}

bool esMultiplo(int a, int b) {
    if (a % b == 0) {
        return true; 
    }
    return false;
}
