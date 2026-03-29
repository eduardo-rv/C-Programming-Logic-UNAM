/* * PROGRAMA: Clasificación de Triángulos
 * ALUMNO: Eduardo Rosas Vazquez
 * MATERIA: Programacion I - UNAM
 * DESCRIPCIÓN: El programa solicita la medida de tres lados y valida si pueden 
 * formar un triángulo (teorema de la desigualdad triangular). Si es válido, 
 * identifica si es Equilátero, Isósceles o Escaleno.
 */

#include <stdio.h>
#include <stdlib.h>

// Funcion para mostrar los datos del alumno y la materia
void caratula() 
{
    printf("Clasificacion de Triangulos\n");
    printf("Alumno: Eduardo Rosas Vazquez\n");
    printf("Materia: Programacion I - UNAM\n\n");
    
    printf("\nPresiona ENTER para comenzar el programa...");
    getchar();
}

// Prototipos de funciones
void ingresarLados(float *ladoA, float *ladoB, float *ladoC);
int validarTriangulo(float a, float b, float c);
void tipoTriangulo(float a, float b, float c);

int main() 
{
    caratula();
    
    int continuar = 1;
    
    do
    {
        // Bloque de limpieza de pantalla compatible
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        float lado1 = 0, lado2 = 0, lado3 = 0;
        
        printf("ANALIZADOR DE TRIANGULOS\n\n");
        ingresarLados(&lado1, &lado2, &lado3);
        
        // Formato para mostrar el resultado
        printf("\n----------------------------------------\n");
        
        if (validarTriangulo(lado1, lado2, lado3))
        {
            tipoTriangulo(lado1, lado2, lado3);
        }
        else
        {
            printf("Error: Las medidas no forman un triangulo valido");
        }
        
        printf("\n----------------------------------------\n");
        
        // Control del ciclo
        puts("\n1. Ingresar otro triangulo.");
        puts("0. Salir");
        printf("Ingresa una opcion: ");
        scanf("%d", &continuar);

    } while(continuar == 1);
    
    return 0;
}

// Obtiene los datos usando punteros para modificar las variables originales
void ingresarLados(float *ladoA, float *ladoB, float *ladoC)
{
    printf("Ingresa el valor del lado 1: ");
    scanf("%f", ladoA);
    
    printf("Ingresa el valor del lado 2: ");
    scanf("%f", ladoB);
    
    printf("Ingresa el valor del lado 3: ");
    scanf("%f", ladoC);
}

// Verifica que la suma de dos lados siempre sea mayor al tercero
int validarTriangulo(float a, float b, float c)
{
    if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Compara los lados para determinar el nombre del triangulo
void tipoTriangulo(float a, float b, float c)
{
    if ((a == b) && (b == c)) 
    {
        printf("Resultado: Triangulo Equilatero");
    }
    else if ((a == b) || (a == c) || (b == c))
    {
        printf("Resultado: Triangulo Isosceles");
    }
    else
    {
        printf("Resultado: Triangulo Escaleno");
    }
}
