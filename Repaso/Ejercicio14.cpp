/*Hacer un programa que desplace un rectángulo por la pantalla de la manera siguiente: si se pulsa el
signo ‘+’, el rectángulo es desplaza 10 unidades hacia la derecha, si pulsa el signo ‘-’, el
rectángulo se desplaza 10 unidades hacia la izquierda. Se ha de controlar que el rectángulo no
salga fuera de los límites de la pantalla.*/

#include <stdio.h>
#include <windows.h>
#include <unistd.h>

void gotoxy (int, int); 
void setInvisible(void);
void setVisible(void);

main(){
	char s;
	int x = 20, y = 20; // inicializar posición
	gotoxy(x, y);
	do {
		setInvisible();
        scanf("%c", &s);
        setVisible();
		system("cls");
		switch(s){
			case 'w': 	y = y - 5;
						break;
			case 'a': 	x = x - 10;
						break;
			case 's': 	y = y + 5;
						break;
			case 'd': 	x = x + 10;
						break;
			case 'q': 	x = x - 10;
						y = y - 5;
						break; 
			case 'e': 	x = x + 10;
						y = y - 5;
						break;                           
		}
		gotoxy(x, y);
		int n=14;
		/*for (int i=0; i<=n-1 + (n-2)/2; i++){
			for (int j=1; j<=(n*2)-1; j++){
				int anxo = (n*2) - 1;
				if ((j == n+i || j == n-i || i == n-1) || (j + (n-2)/2 == i  || j - (n-2)/2 == anxo - i || i == (n-2)/2)) {
					gotoxy(x + i*2.5, y + j);
					printf("*");
				} else {
					gotoxy(x, y);
					printf(" ");
				}
			}
		}*/
		for (int i=0; i<=n-1; i++){
			for (int j=0; j<=n-1; j++){
				if ((j == (n-1)/2 || i == (n-1)/2 || i==0 && j < (n+1)/2 || i==n-1 && j>((n-1)/2)-1 || j==0 && i>((n-1)/2)-1 || j==n-1 && i<(n+1)/2)) {
					gotoxy(x + i, y + j);
					printf("*");
				} else {
					gotoxy(x, y);
					printf(" ");
				}
			}
		}
		sleep(1);
	} while (s != 'f');
}


















void gotoxy(int x, int y){  
	HANDLE hcon;  
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
	dwPos.Y= y;  
	SetConsoleCursorPosition(hcon,dwPos);  
}

void setInvisible(void){
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & ~ENABLE_ECHO_INPUT);
}

void setVisible(void){
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode | ENABLE_ECHO_INPUT);
}