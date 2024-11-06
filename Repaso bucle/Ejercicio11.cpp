/*Determinar el precio de un billete de ida y vuelta en ferrocarril, conociendo la distancia a
recorrer y sabiendo que si el número de días de estancia es superior a 7 y la distancia superior a
800 km. El billete tiene una reducción del 30%. El precio por km = 3,5 Ptas.*/

#include <iostream>
using namespace std;

main(){
	float p;
	int d, dias;
	
	cout << "Introduce la distancia en km: ";
	cin >> d;
	cout << "Introduce los días de estancia: ";
	cin >> dias;
	p = d * 3.5;
	dias > 7 ? cout << "Precio: " << p - (p * 0.3) : cout << "Precio: " << p;		
}