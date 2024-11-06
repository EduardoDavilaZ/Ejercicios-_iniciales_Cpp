//Realizar el algoritmo para obtener la suma de los números pares hasta 1.000.
#include <iostream>
using namespace std;

main(){
	int sp = 0;
	for (int i=2; i<=1000; i+=2){
		sp = sp + i;
	}
	cout << "Suma de los numeros pares: " << sp;
}