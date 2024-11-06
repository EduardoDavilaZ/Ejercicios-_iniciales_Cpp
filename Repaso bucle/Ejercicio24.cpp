/*Se desea conocer una serie de datos de una empresa con 50 empleados: a) ¿Cuántos empleados
ganan más de 300.000 pesetas al mes (salarios altos); b) entre 100.000 y 300.000 pesetas
(salarios medios), y c) menos de 100.000 pesetas (salarios bajos y empleados a tiempo parcial).*/
//Autor: Eduardo Davila Z.
#include <iostream>
using namespace std;

main(){
	int sa = 0, sm = 0, sb = 0, e = 1, s = 0;
	while (e <= 10){
		cout << "Introducir salario: ";
		cin >> s;
		s > 300000 ? sa++ : s > 100000 && s < 300000 ? sm++ : sb++;
		e++;
	}
	cout << "Empleados con salario alto: " << sa << endl;
	cout << "Empleados con salario medio: " << sm << endl;
	cout << "Empleados con salario bajo: " << sb << endl;
}