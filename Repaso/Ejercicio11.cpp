/*Hacer un programa que dibuje un rectángulo en pantalla. El programa ha de pedir cuatro
coordenadas, Fila inicial, Columna inicial, Fila Final y Columna Final, y dibujar el rectángulo
entre estas coordenadas. Ha de controlar que las coordenadas sean válidas (las coordenadas con la
pantalla modo texto son de 1-80 columnas, y de 1-25 filas); también ha de controlar que las
coordenadas finales sean mayores que las coordenadas iniciales. Por ejemplo:
Fila inicial = 5
Columna inicial = 10
Fila Final = 15
Columna Final = 50

Utilizar la función gotoxy(columna, fila). Podéis utilizar cualquier carácter para hacer el
rectángulo, si queréis utilizar los caracteres de recuadro del código ASCII,
╔ 201,═ 205, ╗ 187, ║ 186, ╚ 200, ╝ 188*/

#include <stdio.h>
#include <windows.h>  
 
void gotoxy (int, int); 

main(){
	int x1, y1, x2, y2;
	do {
		printf("Introduce la primera coordenada: ");
		scanf("%d", &x1);
		scanf("\n%d", &y1);
		fflush(stdin);
		printf("Introduce la segunda coordenada: ");
		scanf("%d", &x2);
		scanf("\n%d", &y2);
	} while (x1 > x2 || y1 > y2);
	
	gotoxy(x1, y1);  
	printf("%c", 201);
	gotoxy(x2, y1);  
	printf("%c", 187);
	gotoxy(x1, y2);  
	printf("%c", 200);
	gotoxy(x2, y2);  
	printf("%c", 188);
	
	
	for (int i=x1 + 1; i < x2; i++){
		gotoxy(i, y1);
		printf("%c", 205);
	}
	for (int i= y1 +1 ; i < y2; i++){
		gotoxy(x1, i);
		printf("%c", 186);
	}
	for (int i= y1 +1; i < y2; i++){
		gotoxy(x2, i);
		printf("%c", 186);
	}
	for (int i= x1 +1; i < x2; i++){
		gotoxy(i, y2);
		printf("%c", 205);
	}
}

void gotoxy(int x,int y){  
	HANDLE hcon;  
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
	dwPos.Y= y;  
	SetConsoleCursorPosition(hcon,dwPos);  
} 