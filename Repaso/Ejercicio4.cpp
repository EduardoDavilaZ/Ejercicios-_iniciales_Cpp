/*Repita el programa R3, pero para dos modalidades de entradas A y B. Después que el cliente haya
pedido la cantidad de entradas, el programa ha de pedir si las quiere de la modalidad A, o de la
modalidad B, restarlas en consecuencia.*/

#include <iostream>
#include <cstring>
using namespace std;

main(){
	int c, n;
	char op;
	do{
		cout << "Introduce la cantidad de entradas a la venta: "; cin >> c;
	} while (c < 0);
	
	
	while (c > 0){
		do {
			cout << "Cuantas entradas desea comprar? : "; cin >> n;
			if (n >= 6){
				cout << "No se permite la venta de mas de 5 entradas por persona. " << endl;
			}
			if (n > c){
				do{
					cout << "Quedan " << c << " entradas, desea comprarlas? (s/n): ";
					cin >> op;
					
					if (op == 's'){
						c == 0;
					} else if (op == 'n'){
						c == c;
					}else {
						cout << "Vuelva a introducir su opcion";
					}
				} while (op != 's' && op != 'n');
			}
		} while (n >= 6);
		c = c - n;
	}
	if (c <= 0){
		cout << "Se han agotado las entradas, gracias." << endl;
	}
	cout << "Introduzca la modalidad: "; 
	
}