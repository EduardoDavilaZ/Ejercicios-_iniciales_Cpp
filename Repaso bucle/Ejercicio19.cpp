//Leer 100 números. Determinar la media de los números positivos y la media de los números negativos.

#include <iostream>
using namespace std;

main(){
	float i=1, n, sp = 0, sn = 0;
	while (i <= 3){
		cout << "Introduce un numero: ";
		cin >> n;
		n >= 0 ? sp = sp + n : sn = sn + n;
		i++;
	}
	cout << "Media de los numeros positivos: " << sp/3 << endl;
	cout << "Media de los numeros negativos: " << sn/3 << endl;
	
}