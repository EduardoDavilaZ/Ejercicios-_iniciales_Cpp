//Hacer un programa que pida el precio y la cantidad de un producto y  calcule el 
//total. Utilizar variables enteras.

#include <iostream>
using namespace std;

struct producto {
    int codigo;
    char nombre[20];
    double precio;
    int cantidad;
};
 // tipo de estructura con nombre producto

main(){
	producto productos[3] = {
        {1, "Aceite de Oliva", 8.50, 30},
        {2, "Jamón Serrano", 3.60, 15},
        {3, "Aceitunas", 1.60, 20}
    };
	
	// variables
	int cod, cant, i;
	double total; 
	bool encontrado = false;
	
	cout << "Introduce el código del producto: " << endl;
	cin >> cod;
	
	for (i = 0; i < 3; ++i) {
        if (productos[i].codigo == cod) {
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Producto no encontrado." << endl;
        return 1;
    }

	cout << "Introduce la cantidad a comprar: " << endl;
	cin >> cant;
	
	productos[i].cantidad = productos[i].cantidad - cant;
	
	total = productos[i].precio * cant; // calcular el total
	
	cout << "El total de la compra es: " << total << endl; 
	
}
