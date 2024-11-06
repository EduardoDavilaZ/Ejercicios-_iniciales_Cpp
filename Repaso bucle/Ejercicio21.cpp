/*Una estación climática proporciona un par de temperaturas diarias (máxima, mínima) (no es
posible que alguna o ambas temperaturas sea 0 grados). La pareja fin de temperaturas es 0,0. Se
pide determinar el número de días, cuyas temperaturas se han proporcionado, las medias máxima
y mínima, el número de errores --temperaturas de 0o- y el porcentaje que representan.*/

#include <iostream>
using namespace std;

main(){
	float max, min, smax = 0, smin = 0;
	int i = 0, e = 0;
	
	while (max != 0 || min != 0){
		cout << "Temperatura maxima: ";
		cin >> max;
		cout << "Temperatura minima: ";
		cin >> max;
		i++;
		smax = smax + max;
		smin = smin + min;
		if (max == 0 || min == 0){
			e++;
		}
	}
	cout << "Media de temperatura maxima: " << smax/i << endl;
	cout << "Media de temperatura minima: " << smin/i << endl;
	cout << "Errores (0 grados): " << (e * 100) / i << "%" << endl;	
}