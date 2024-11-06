/*Un tendero tiene cinco tipos de zanahoria, el tipo A = 15 pts/Kg., el tipo B = 18 pts/Kg. El tipo C
= 21 pts/Kg. , el tipo D = 25 pts/Kg. y el tipo F = 32 pts/Kg. Hacer un programa que pida el tipo de
zanahoria y la cantidad y luego calcule el total.*/

#include <iostream>
using namespace std;

int result(int, int);

main(){
	char letra[1];
	int c;
	cout << "Introduce una letra: ";
	cin >> letra;
	cout << "Introduce la cantidad: ";
	cin >> c;
	switch (letra[0]){
		case 'A': cout << "Resultado: " << result(15, c);
		break;
		case 'B': cout << "Resultado: " << result(18, c);
		break;
		case 'C': cout << "Resultado: " << result(21, c);
		break;
		case 'D': cout << "Resultado: " << result(25, c);
		break;
		case 'F': cout << "Resultado: " << result(32, c);
		break;
	}	
}

int result(int p, int c){
	return p * c;
}
