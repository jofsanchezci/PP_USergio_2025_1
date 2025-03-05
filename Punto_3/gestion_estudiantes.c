#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura inicial del estudiante
typedef struct {
    char *nombre;
    char *apellido;
    unsigned short edad;   // Bitfield podría ser aplicado aquí
    char id[15];           // ID fija, pero podría optimizarse
    int *calificaciones;
    int num_calificaciones;
} Estudiante;

// Función para crear un nuevo estudiante
Estudiante* crear_estudiante(const char* nombre, const char* apellido, unsigned short edad, const char* id, int* calificaciones, int num_calificaciones) {
    Estudiante *est = (Estudiante*)malloc(sizeof(Estudiante));
    if (est == NULL) {
        printf("Error al asignar memoria para el estudiante.\n");
        return NULL;
    }
    est->nombre = strdup(nombre);
    est->apellido = strdup(apellido);
    est->edad = edad;
    strncpy(est->id, id, sizeof(est->id) - 1);
    est->id[sizeof(est->id) - 1] = '\0';

    est->num_calificaciones = num_calificaciones;
    est->calificaciones = (int*)malloc(num_calificaciones * sizeof(int));
    if (est->calificaciones == NULL) {
        free(est->nombre);
        free(est->apellido);
        free(est);
        return NULL;
    }
    for (int i = 0; i < num_calificaciones; i++) {
        est->calificaciones[i] = calificaciones[i];
    }

    return est;
}

// Función para liberar memoria de un estudiante
void liberar_estudiante(Estudiante *est) {
    if (est) {
        free(est->nombre);
        free(est->apellido);
        free(est->calificaciones);
        free(est);
    }
}

// Ejemplo de uso (main)
int main() {
    int calificaciones[] = {85, 90, 78};
    Estudiante *est = crear_estudiante("Carlos", "Gomez", 20, "12345678", calificaciones, 3);

    if (est) {
        printf("Estudiante %s %s creado con éxito.\n", est->nombre, est->apellido);
        liberar_estudiante(est);
    }
    return 0;
}