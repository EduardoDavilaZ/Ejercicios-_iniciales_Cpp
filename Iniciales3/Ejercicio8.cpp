//Sumar 10 n�meros introducidos por teclado.

#include <iostream>
using namespace std;

//Prototipo de funci�n
int suma (void);

main(){
	cout << "Suma total: " << suma() << endl;
}

int suma (void){
	int resultado, n;
	for (int i=0; i<10; i++){
		cout << "Introdue un numero: ";
		cin >> n;
		resultado += n;
		n = 0;
	}
	return resultado;
}
