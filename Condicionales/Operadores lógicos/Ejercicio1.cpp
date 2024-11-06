/*Hacer un programa que pida el nombre, el precio y la cantidad de un producto. Calcular el total; el
programa ha de pedir el % de descuento, siempre y que el total sea mayor que 10.000 o el nombre
del producto sea ‘A’.*/

//Autor: Eduardo Davila Z.

#include <iostream>
#include <cstring> // string.h
using namespace std;

void total_desc(float, float);

int main(){
    char nombre[1];
    float p, c;
    cout << "Introduce el nombre del producto: ";
    cin >> nombre;
    cout << "Introduce el precio del producto: ";
    cin >> p;
    cout << "Introduce la cantidad del producto: ";
    cin >> c;
    if 		(p * c > 10000 || strcmp(nombre, "A") == 0) {total_desc(p, c);} 
	else 	{cout << "Total: " << p * c << endl;}
}
void total_desc(float p, float c){
    int d;
    cout << "Introduce el % de descuento: ";
    cin >> d;
    float t = p * c;
    float desc = t * (d / 100.00); // forzar pa q me de float 
    cout << "Total con desc: " << t - desc;
}