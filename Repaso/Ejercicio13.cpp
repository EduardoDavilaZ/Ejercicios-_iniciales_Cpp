/*Repetir el programa R10, controlando que para ganar un juego, además de llegar a 4 puntos, la
diferencia de punto respecto al contrario ha de ser superior a 1. De igual forma, para ganar un set,
a parte de tener que llegar a 6 juegos, la diferencia de juegos con el contrario ha de ser superior a
1.*/

#include <stdio.h>  
#include <windows.h>  
void gotoxy(int x,int y){  
	HANDLE hcon;  
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
	dwPos.Y= y;  
	SetConsoleCursorPosition(hcon,dwPos);  
}  
int main(){  
	gotoxy(40,10);  
	printf("*");  
	return 0;  
}

/*gotoxy(x, y);
		printf("ARRIBA ESPA%cA", 165);
		gotoxy(x, y+1);
		printf("VIVA FRANCO");*/