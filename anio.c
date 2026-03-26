/* * PROGRAMA: Determinación de Año Bisiesto
 * ALUMNO: Eduardo Rosas Vazquez
 * MATERIA: Programacion I - UNAM
 * DESCRIPCIÓN: Este programa analiza si un año ingresado es bisiesto siguiendo 
 * las reglas del calendario gregoriano: debe ser divisible entre 4, no ser 
 * divisible entre 100, a menos que también sea divisible entre 400.
 */

#include <stdio.h>
#include <stdlib.h>

// Funcion para mostrar los datos del alumno y la materia
void caratula() 
{
    printf("Determinacion de Año Bisiesto\n");
    printf("Alumno: Eduardo Rosas Vazquez\n");
    printf("Materia: Programacion I - UNAM\n\n");
    
    printf("\nPresiona ENTER para comenzar el programa...");
    getchar();
}

int main()
{
    int anio, continuar;
    
    // Presentacion inicial
    caratula();
    
    do
    {
        // Limpieza de consola para inicio de operacion
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("ANALIZADOR DE AÑOS\n\n");
        printf("Ingresa un año: ");
        scanf("%d", &anio);
        
        // Formato para resaltar el resultado
        printf("\n----------------------------------------\n");
        
        // Verificacion de reglas de bisiestos con condiciones anidadas
        if (anio % 4 == 0)
        {
            if (anio % 100 == 0)
            {
                if (anio % 400 == 0)
                {
                    printf("El año %d es bisiesto", anio);
                }
                else
                {
                    printf("El año %d no es bisiesto", anio);
                }
            }
            else 
            {
                printf("El año %d es bisiesto", anio);
            }
        }
        else
        {
            printf("El año %d no es bisiesto", anio);
        }
        
        printf("\n----------------------------------------\n");
        
        // Menu de opciones para el ciclo
        puts("\n1. Continuar programa");
        puts("2. Cerrar programa");
        printf("Selecciona una opcion: ");
        scanf("%d", &continuar);

    } while (continuar == 1);
    
    return 0;
}
