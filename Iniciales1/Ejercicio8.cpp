/*Hacer un programa que calcule con horas minutos y segundos, el tiempo que 
tardará un móvil en recorrer una cantidad de kilómetros K, a una velocidad media 
V, dada en metros/segundos. El tiempo lo ha de dar en horas, minutos y segundos. 
Una hora son 3600 segundos, y un minuto son 60 segundos.*/

#include <iostream>
using namespace std;

// Prototipo de funciones
void validarDistancia(float*);
void validarTiempo(int*, float);
float calcularTiempo(float, float);

main(){
	int tiempo[3] = {00, 00, 00};
	float distancia, velocidad, aux;
	
	cout << "Calcular tiempo de recorrido" << endl;
	cout << "Distancia en km: " << endl;
	cin >> distancia;
	validarDistancia(&distancia);
	cout << "Velocidad m/s" << endl;
	cin >> velocidad;
	
	aux = calcularTiempo(distancia, velocidad);
    validarTiempo(tiempo, aux);
	
	cout << "Tiempo: " << endl;
	for(int i=0; i<3; i++){
		cout << tiempo[i] << " : ";
	}
	
}

void validarDistancia(float* distancia) { // pasar de kilómetros a metros
    *distancia = (*distancia) * 1000; 
}

void validarTiempo(int* tiempo, float aux) {
    tiempo[0] = aux / 3600; // calcular horas
    aux = aux - tiempo[0] * 3600;
    tiempo[1] = aux / 60; // calcular minutos
    tiempo[2] = aux - tiempo[1] * 60; // calcular segundos
}

float calcularTiempo(float distancia, float velocidad) {
    return distancia / (velocidad / 1000); // la velocidad introducida está en km, debe estar a metros.
}
