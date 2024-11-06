/*Hacer un pseudocódigo en el que dada una cantidad de euros introducida desde 
teclado, la distribuya en billetes de 500€, 200€, 100€, 50€, 20€, 10€, 5€. Por ejemplo, la 
cantidad de 1783 la distribuiría así: 3 billetes de 500€, 1 billetes de 200€, 1 
billetes de 50€, 1 billetes de 20€, 1 billetes de 10€, 1 moneda de 2€ y una 
moneda de 1 €.*/
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

int distribucion (int, int);

main(){
	int euros;
	int aux;
	int contador = 0;
	cout << "Introduce un monto: ";
	cin >> euros;
	
	int quinientos = distribucion(500, euros);
    euros -= quinientos * 500;
    int doscientos = distribucion(200, euros);
    euros -= doscientos * 200;
    int cien = distribucion(100, euros);
    euros -= cien * 100;
    int cincuenta = distribucion(50, euros);
    euros -= cincuenta * 50;
    int veinte = distribucion(20, euros);
    euros -= veinte * 20;
    int diez = distribucion(10, euros);
    euros -= diez * 10;
    int cinco = distribucion(5, euros);
    euros -= cinco * 5;
    int dos = distribucion(2, euros);
    euros -= dos * 2;
    int uno = distribucion(1, euros);
    euros -= uno * 1;
	
	if (quinientos != 0){cout << quinientos << " billetes de 500" << endl;}
	if (doscientos != 0){cout << doscientos << " billetes de 200" << endl;}
	if (cien != 0){cout << cien << " billetes de 100" << endl;}
	if (cincuenta != 0){cout << cincuenta << " billetes de 50" << endl;}
	if (veinte != 0){cout << veinte << " billetes de 20" << endl;}
	if (diez != 0){cout << diez << " billetes de 10" << endl;}
	if (cinco != 0){cout << cinco << " billetes de 5" << endl;}
	if (dos != 0){cout << dos << " monedas de 2" << endl;}
	if (uno != 0){cout << uno << " monedas de 1" << endl;}
}
int distribucion (int n, int euros){
	return euros / n;
}