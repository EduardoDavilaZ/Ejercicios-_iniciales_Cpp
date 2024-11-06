/*Sobre el programa R4, hacer que cuando se agoten las entradas de una modalidad, el programa
muestre un mensaje avisando de este suceso. Diseñarlo de tal manera que ya no se pregunte la
modalidad de las entradas, sino que estas se resten automáticamente de la modalidad de las que
todavía quedan.*/

#include <iostream>
#include <cstring>
using namespace std;

main(){
	int ca, cb, n;
	char op, m;
	do{
		cout << "Cantidad de entradas modalidad A: "; cin >> ca;
	} while (ca < 0);
	do{
		cout << "Cantidad de entradas modalidad B: "; cin >> cb;
	} while (cb < 0);
	
	
	while (ca > 0 && cb > 0){
		do {
			cout << "Cuantas entradas desea comprar? : "; cin >> n;
			do {
				cout << "Selecciona la modalidad (A/B) : "; cin >> m;
			} while (op != 'a' && op != 'b');
			
			if (n >= 6){
				cout << "No se permite la venta de mas de 5 entradas por persona. " << endl;
			} while (op != 's' && op != 'n');
			
			if (m == 'a' && n > ca || m == 'b' && n > cb){
				do{
					cout << "Quedan " << (m == 'a' ? ca : cb) << " entradas, desea comprarlas? (s/n): ";
					cin >> op;
					
					if (op == 's'){
						m=='a'? ca == 0 : cb == 0;
					} else if (op == 'n'){
						m=='a'? ca == ca : cb == cb;
					}else {
						cout << "Vuelva a introducir su opcion";
					}
				} while (op != 's' && op != 'n');
			}
			m == 'a' ? ca = ca - n : cb = cb - n;
		} while (n >= 6);
	}
	if (ca <= 0 && cb <= 0){
		cout << "Se han agotado las entradas, gracias." << endl;
	}
	cout << "Introduzca la modalidad: "; 
	
}