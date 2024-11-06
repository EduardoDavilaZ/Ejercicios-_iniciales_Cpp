/*Se desea leer las calificaciones de una clase de informática y contar el número total de aprobados (5 o mayor que 5).*/
#include <iostream>
using namespace std;

main(){
	int a, i=1, n, alumnos;
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
		if (n >= 5){
			a++; //Aprobados
		}
		i++;
	}
	cout << "Aprobados: " << a;
}