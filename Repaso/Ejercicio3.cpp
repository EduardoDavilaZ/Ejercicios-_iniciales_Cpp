/*Continuando con el mismo programa, diseñarlo de tal manera que no se puedan despachar más
entradas de las que queden. Por ejemplo, si quedan 3 entradas, y un cliente pide 4, el programa ha
de avisar que sólo en quedan 3, después ha de preguntar si las quiere o no. Si las quiere acaba el
programa; si no las quiere, continúan quedando 3 entradas.*/

#include <iostream>
#include <cstring>
using namespace std;

main(){
	int c, n;
	char op[1];
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
}