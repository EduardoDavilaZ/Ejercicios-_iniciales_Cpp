/*Hacer un programa en el cual el ordenador genere un número aleatoriamente. El usuario ha de
adivinar de que número se trata con un máximo de cinco oportunidades. Cuando el usuario entre
un número incorrecto, el ordenador ha de mostrar un mensaje diciendo si este número es mayor o
menor que el que ha generado. Al final, si el usuario ha acertado el número hacer que en pantalla
se muestre un mensaje avisando que ha ganado, si no se ha acertado, el ordenador ha de mostrar el
número que ha generado.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

main(){
	int sw = 0, n, c = 1;
	srand(time(nullptr));
	int random = rand() % (10 - 1) + 1;
	do{
		cout << "Adivina el numero (1 - 10): "; cin >> n;
		if (random == n){
			cout << "Has adivinado el numero, fin del juego";
			sw = 1;
		}
		c++;
	} while (c <= 5 && sw != 1);
	if (sw == 0){
		cout << "Has perdido, fin del juego.";
	}
}