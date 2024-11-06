/*Calcular y visualizar la suma y el producto de los números pares comprendidos 
entre 20 y 400 ambos inclusive.*/

#include <iostream>
using namespace std;

//Prototipo de función
void funcion (int, int*, long long*);

main(){
	int suma = 0;
	long long producto = 1;
	
	funcion(20, &suma, &producto);
	cout << "Suma total: " << suma << endl;
	cout << "Producto total: " << producto << endl;
}

void funcion (int n, int* suma, long long* producto){
	if (n > 400){
		return;
	}	
	if (n % 2 == 0){
		*suma = *suma + n;
		*producto = (*producto) * n;
	}
	return funcion (n + 2, suma, producto);
}
