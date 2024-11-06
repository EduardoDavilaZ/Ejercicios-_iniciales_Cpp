/*Escribir un algoritmo que permita escribir en pantalla la frase "¿Desea continuar? (S/N)", hasta
que la respuesta sea 'S' o 'N'.*/

#include <iostream>
using namespace std;

main(){
	char* elquijote[] = {	"En un lugar de la Mancha, de cuyo nombre no quiero acordarme", 
							"no ha mucho tiempo que vivía un hidalgo de los de lanza en astillero",
							"adarga antigua, rocín flaco y galgo corredor"};
	int i=0;
	char c;
	do{
		cout << elquijote[i] << endl << endl;
		cout << "¿Desea continuar? (S/N): ";
		cin >> c;
		i++;
	} while (c == 'S' && c != 'N' && i<=2);
}