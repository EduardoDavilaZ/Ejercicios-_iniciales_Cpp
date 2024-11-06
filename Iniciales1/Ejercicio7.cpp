//Hacer un programa que pase de grados Celsius a grados Farhengeit.

#include <iostream>
using namespace std;

// Prototipo de función
float farhengeit (float);

main(){
	float c, f;
	
	cout << "Introduce los grados Celsius" << endl;
	cin >> c;
	
	f = farhengeit(c);
	
	cout << "Grados Farhengeit: " << f << endl;
}

float farhengeit (float c){
	return (9/5) * c + 32;
}
