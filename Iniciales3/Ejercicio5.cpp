/*Se trata de escribir el algoritmo que permita emitir la factura correspondiente a 
una compra de un artículo determinado del que se adquieren una o varias 
unidades. El IVA a aplicar es del 12%. Y si el precio bruto (precio venta más 
IVA) es mayor de 300€, se debe realizar un descuento del 5%. */

#include <iostream>
using namespace std;

//Prototipo de función
int total (int);

main(){
	int p;
	int suma = 0;
	do {
		cout << "Introduce el precio del producto: ";
		cin >> p;
		suma += p;
	} while (p != 0);
	int resultado = total(suma);
	cout << "El resultado es: " << resultado << endl;
}

int total (int suma){
	int resultado = suma + ((suma * 12) / 100);
	if (resultado > 300){
		resultado = resultado - ((resultado * 5) / 100);
		return resultado;
	}
	return resultado;
}
