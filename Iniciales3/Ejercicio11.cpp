//Realizar un diagrama que permita contar y visualizar los 100 primeros n�meros enteros. 

#include <iostream>
#include <unistd.h>
using namespace std;

//Prototipo de funci�n
void funcion(int);

main(){
	funcion(0);
}

void funcion (int n){
	system("cls");
	if (n > 100){
		return;
	}
	cout << n << endl;
	usleep(200000);
	return funcion(n + 1);
}
