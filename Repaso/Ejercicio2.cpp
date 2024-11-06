/*Repetir el programa R1, hacer que el programa pueda despachar como máximo 5 entradas por
cliente. Es decir, si un cliente pide 5 entradas o menos se venden, si pide más de 5, el programa ha
de mostrar un mensaje avisando que no se permite la venta de más de 5 entradas por persona,
evidentemente no se han de vender.*/

#include <iostream>
using namespace std;

main(){
	int c, n;
	do{
		cout << "Introduce la cantidad de entradas a la venta: "; cin >> c;
	} while (c < 0);
	
	while (c > 0){
		do {
			cout << "Cuantas entradas desea comprar? : "; cin >> n;
			if (n >= 6){
				cout << "No se permite la venta de mas de 5 entradas por persona. " << endl;
			}
		} while (n >= 6);
		
		c = c - n;
	}
	if (c <= 0){
		cout << "Se han agotado las entradas, gracias." << endl;
	}
}