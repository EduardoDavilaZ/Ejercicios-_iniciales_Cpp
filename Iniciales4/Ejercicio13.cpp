//Leer dos n�meros enteros de dos d�gitos y determinar si la suma de los dos n�meros origina, un n�mero par. 

#include <iostream>
using namespace std;

//Prototipo de funci�n
void digitos (int);
void resultado (int, int);

main(){
	int a, b;
	cout << "Introduce 2 numeros de dos digitos: " << endl;
	cout << "Primer numero: ";
	cin >> a;
	cout << "Segundo numero: ";
	cin >> b;
	
	digitos(a);
	digitos(b);
	
	// separa manualmente los d�gitos para ser comparados
	resultado(a % 10, b % 10);
	resultado((a / 10) % 10, (b / 10) % 10);
	resultado((a / 10) % 10, b % 10);
	resultado((b / 10) % 10, a % 10);
}

void digitos (int n){ // se encarga de separar los d�gitos
	int digito1 = n % 10;
    int digito2 = (n / 10) % 10;
}

void resultado (int digito1, int digito2){
	if ((digito1 + digito2) % 2 == 0){
    	cout << "La suma de " << digito1 << " y " << digito2 << " da un numero par" << endl;
	}
}
