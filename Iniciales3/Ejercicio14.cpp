//Escribir la suma de los 10 primeros números pares. 
 
#include <iostream>
using namespace std;

//Prototipo de función
int suma(int);

main(){
	cout << "Suma de los 10 primeros numeros pares: " << suma(0) << endl;
}

int suma (int n){
	if (n > 20){
		return 0;
	}
	
	return n + suma(n + 2);
}
