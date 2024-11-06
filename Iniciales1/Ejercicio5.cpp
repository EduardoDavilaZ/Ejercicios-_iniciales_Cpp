/*Hacer un programa que pida el precio y la cantidad de un producto y  calcule el 
total. El programa, después de mostrar el total, ha de pedir un % de descuento, ha 
de calcular el total descuento, y el total a pagar. Utilizar variables de tipo float. El 
resultado que muestre el programa ha de tener dos decimales.*/

/*Usaremos la estructura del ejercicio 2*/

#include <iostream>
using namespace std;

struct producto {
    int codigo;
    char nombre[20];
    float precio;
    int cantidad;
};
 
//Prototipo de funciones
int buscar(producto*, int);
float descuento(float, float);


main(){
	producto productos[3] = {
        {1, "Aceite de Oliva", 8.50, 30},
        {2, "Jamón Serrano", 3.60, 15},
        {3, "Aceitunas", 1.60, 20}
    };
	
	// variables
	int cod, cant, i;
	float total, compra, desc;
	
	cout << "Introduce el código del producto: " << endl;
	cin >> cod;
	
	i = buscar(productos, cod); // pasar por valor

    if (i == 0) { // si no se ha encontrado, se sale del programa.
        cout << "Producto no encontrado." << endl;
        return 1;
    }

	cout << "Introduce la cantidad a comprar: " << endl;
	cin >> cant;
	productos[i].cantidad = productos[i].cantidad - cant;
	compra = productos[i].precio * cant; // calcular el total
	
	cout << "El precio de la compra es: " << compra << endl; 
	
	cout << "Introduce el porcentaje de descuento" << endl;
	cin >> desc;
	
	total = descuento(compra, desc);
	cout << "Total a pagar: " << total << endl;
	
}

int buscar(producto* productos, int cod) { // búsqueda secuencial
    for (int i = 0; i < 3; ++i) {
        if (productos[i].codigo == cod) {
            return i;
        }
    }
    return 0;
}

float descuento(float compra, float desc){
	return (compra * desc)/ 100;
}
