/*Determinar la media de una lista de números positivos terminada con un número no positivo
después del último número válido.*/
#include <iostream>
using namespace std;

main(){
	float n=0, c=0, s=0;
	do{
		cout << "Introduce un numero: ";
		cin >> n;
		if (n > 0){
			s = s + n;
			c++;
		}
	} while(n >= 0);
	cout << "Media: " << s/c;
}