//Leer un número entero y determinar si termina en 7.
#include <iostream>
using namespace std;

main(){int n; cout << "Introduce n: "; cin >> n; n % 10 == 7 ? cout << "Termina en 7" : cout << "No termina en 7";}

/*
#include <stdio.h>
main(){
	int n;
	printf("introduce n: ");
	scanf("%d", &n);
	
	for (int i=0; i<=n; i++){
		for (int j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	for (int i=n; i>=0; i--){
		for (int j=i; j>=0; j--){
			printf("*");
		}
		printf("\n");
	}
}*/