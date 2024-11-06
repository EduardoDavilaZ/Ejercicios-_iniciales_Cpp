/*Hacer un programa para llevar el control de venta de entradas. Lo primero que ha de hacer el
programa es pedir la cantidad de entradas que se pondrán a la venta. Después ha de mostrar un
mensaje, pidiendo al cliente el número de entradas que quiere comprar. El proceso de vender
entradas se ha de repetir hasta que se hayan agotado todas.*/

#include <iostream>
using namespace std;

main(){
	int c, n;
	do{
		cout << "Introduce la cantidad de entradas a la venta: "; cin >> c;
	} while (c < 0);
	
	while (c != 0){
		cout << "Cuantas entradas desea comprar? : "; cin >> n;
		c = c - n;
	}
	if (c == 0){
		cout << "Se han agotado las entradas, gracias." << endl;
	}
}