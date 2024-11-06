//Sumar los números enteros de 1 a 100 mediante a) estructura repetir; b) estructura mientras; «) estructura desde.
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

void bucleFor();
void bucleWhile();
void bucleDoWhile();

main(){
	char l;
	do{
		cout << "Introduce una letra (a, b o c): " << endl;
		cout << "S para salir: " << endl;
		cout << "a. Estructura para" << endl;
		cout << "b. Estructura mientras" << endl;
		cout << "c. Estructura hacer mientras" << endl;
		cin >> l;
		switch (l){
			case 'a': bucleFor();
						break;
			case 'b': bucleWhile();
						break;
			case 'c': bucleDoWhile();
						break;
			case 's': break;
		}
	} while (l != 'a' && l != 'b' && l != 'c');
}

void bucleFor(){
	int s;
	for (int i=0; i<=100; i++){
		s = s + i;
	}
	cout << "Suma: " << s;
}
void bucleWhile(){
	int s=0, i=0;
	while(i <= 100){
		s = s + i;
	}
	cout << "Suma: " << s;
}
void bucleDoWhile(){
	int s=0, i=0;
	do{
		s = s + i;
		i++;
	} while (i <= 100);
	cout << "Suma: " << s;
}