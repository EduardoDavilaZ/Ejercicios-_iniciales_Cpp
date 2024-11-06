/*Hacer un programa que pida cuatro números A, B, C y D; el programa ha de sumarlos si A/B >
C/D sino, ha de sumar sólo B y D. En caso que B=0, o D=0 el programa ha de mostrar un mensaje
avisando que no se puede dividir por 0; en tal caso no ha de hacerse ninguna operación.*/

//Autor: Sr. Eduardo D. Z.

#include <iostream>
using namespace std;

main(){
	int a, b, c, d;
	cout << "Introducir A: ";	cin >> a;
	cout << "Introducir B: ";	cin >> b;	
	cout << "Introducir C: ";	cin >> c;
	cout << "Introducir D: ";	cin >> d;
	b == 0 || d == 0 ? cout << "No se puede dividir x cero" : a/b > c/d ? cout << "Suma: " << a+b+c+d : cout << "Suma de B y D: " << b+d;
}