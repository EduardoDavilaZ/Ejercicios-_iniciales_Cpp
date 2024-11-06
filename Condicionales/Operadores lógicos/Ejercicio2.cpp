/*Repetir el programa anterior, pero hacer que el programa pida el % de descuento si el producto es
‘A’, y el total supera las 10.000 pesetas.*/

//Autor: Eduardo Davila Z.

#include <iostream>
#include <cstring>
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
    if 		(p * c > 10000 && strcmp(nombre, "A") == 0) {total_desc(p, c);}  // lo mismo pero con AND 
	else 	{cout << "Total: " << p * c << endl;}
}
void total_desc(float p, float c){
    int d;
    cout << "Introduce el % de descuento: ";
    cin >> d;
    float t = p * c;
    float desc = t * (d / 100.00);
    cout << "Total con desc: " << t - desc;
}