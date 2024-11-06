/*Hacer un programa que determine si con el valor de los tres lados de un triángulo, se puede formar
este triángulo. Para formar un triángulo, uno de los lados ha de ser más pequeño que la suma de los
otros dos.*/



#include <iostream>
using namespace std;

main(){
	int tri[3];
	int i;
	for (i=0; i<=2; i++){
		cout << "Introduce el lado " << i << " : ";
		cin >> tri[i];
	}
	
	i = 0;
	if (tri[i] < tri[i+1] + tri[i+2] || tri[i+1] < tri[i+2] + tri[i] || tri[i+2] < tri[i+1] + tri[i] ){
		cout << "Se puede formar un triangulo" << endl;
	} else {
		cout << "No se puede formar un triangulo" << endl;
	}
}