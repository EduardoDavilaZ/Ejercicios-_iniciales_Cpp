/*Calcular la nota media de los alumnos de una clase considerando n-números de 
alumnos y c-número de notas de cada alumno. */

/*Hoy no hay iostream, al ser n-números de alumnos y c-número de notas, podemos
introducir diferente cantidad de notas por alumno y tantos alumnos como queramos;
por ello, un fichero binario que junte los registros es una buena opción*/

#include <stdio.h>
#include <string.h>

typedef struct{
	char alumno[10];
	double nota;
}rg;

//Prototipo de función
char* nombre (void);
double mediaNotas (void);

main(){
	FILE* fichero;
	fichero = fopen("alumnos.dat", "ab+");
	char nombreAlumno[10];
 	rg registro;
    do {
        strcpy(nombreAlumno, nombre());
        if (strcmp(nombreAlumno, "0") == 0) {
            break;
        }
        strcpy(registro.alumno, nombreAlumno);
        registro.nota = mediaNotas();
        fwrite(&registro, sizeof(rg), 1, fichero);
    } while (strcmp(nombreAlumno, "0") != 0);
	fclose(fichero);
	
	fichero = fopen("alumnos.dat", "rb");

    printf("\nLeer fichero:\n");
    while (fread(&registro, sizeof(rg), 1, fichero)) {
        printf("Alumno: %s, Nota media: %.2f\n", registro.alumno, registro.nota);
    }

    fclose(fichero);	
}

char* nombre (void){
	char alumno[10];
	printf("Nombre del alumno: ");
	scanf("%s", alumno);
	return alumno;
}
double mediaNotas(void) {
    int suma = 0, contador = 0;
    int n;
    do {
        printf("Nota: ");
        scanf("%d", &n);
        if (n != 0) {
            suma += n;
            contador++;
        }
    } while (n != 0);

    if (contador == 0) {
        return 0;
    }
    return suma / contador;
}


