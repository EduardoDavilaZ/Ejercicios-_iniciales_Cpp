/*Un comercio dispone de dos tipos de artículos en fichas correspondientes a diversas sucursales
con los siguientes campos:
 código del articulo A o B,
 precio unitario del articulo,
 número de artículos/.
La última ficha del archivo de artículos tiene un código de artículo, una letra X. Se pide:
 el número de artículos existentes de cada categoría,
 el coste total de los artículos de cada categoría.*/

#include <iostream>
#include <cstring>
using namespace std;

main(){
	char cod[1];
	float p;
	int n;
	float cta, ctb, cb, ca;
	
	while (strcmp(cod, 'X') == 0){
		do{
			cout << "Introduce el codigo del articulo: ";
			cin >> cod;
		} while (cod != 'A' && cod != 'B');
		cout << "Precio: " << p;
		cin >> p;
		cout << "Num de articulos: ";
		cin >> n;
		if (strcmp(cod, 'A') == 0){
			ca++; 
			cta = cta + (p * n);
		}
		if (strcmp(cod, 'B') == 0){
			cb++; 
			cta = ctb + (p * n);
		} 
	}
	
	cout << "Cantidad de articulos A: " << ca;
	cout << "Coste total articulos A: " << cta << endl;
	cout << "Cantidad de articulos B: " << cb;
	cout << "Coste total articulos B: " << cta << endl;
}