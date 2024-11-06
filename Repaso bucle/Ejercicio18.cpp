//Leer las notas de una clase de informática y deducir todas aquellas que son NOTABLES (>=7 y <9).
#include <iostream>
using namespace std;

main(){
	int notables, i=1, n, alumnos;
	cout << "Introduce el numero de alumnos: ";
	cin >> alumnos;
	while (i <= alumnos){
		do{
			cout << "Introduce la nota: ";
			cin >> n;
			if (n > 10 || n < 0){
				cout << "   La nota debe estar entre 0 y 10, vuelve a introducir" << endl;
			}
		} while (n > 10 || n < 0);
		if (n>=7 && n<9){
			notables++;
		}
		i++;
	}
	cout << "Notables: " << notables;
}