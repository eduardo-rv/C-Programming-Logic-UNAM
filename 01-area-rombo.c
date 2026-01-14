/* * Ejercicio: Cálculo de Geometría (Rombo)
 * Materia: Programación I - UNAM FES Acatlán
 * Alumno: Eduardo Rosas Vazquez
 * Descripción: Programa básico para calcular el área y perímetro de un rombo
 * solicitando datos al usuario.
 */

#include <stdio.h>
#include <stdlib.h>

// Funcion para mostrar la caratula del proyecto
void caratula() 
{
    printf("Calculo de Area y Perimetro: Rombo\n");
    printf("Alumno: Eduardo Rosas Vazquez\n");
    printf("Materia: Programacion I - UNAM\n\n");
    
    printf("\nPresiona ENTER para comenzar el programa...");
    getchar();
}

int main() 
{
    // Presentación inicial del alumno
    caratula();
    
    // Bloque de compatibilidad para limpieza de pantalla
    #ifdef _WIN32
        system("cls");   
    #else
        system("clear"); 
    #endif
    
    // Definición de variables
    double D_mayor, d_menor, lado, area, perimetro;
    
    // Entrada de datos del usuario
    printf("Introduce la Diagonal Mayor (D): ");
    scanf("%lf", &D_mayor);
    
    printf("Introduce la Diagonal Menor (d): ");
    scanf("%lf", &d_menor);
    
    printf("Introduce la medida de uno de los lados: ");
    scanf("%lf", &lado);
    
    // Operaciones matemáticas
    // Área: Diagonal Mayor por diagonal menor entre 2
    area = (D_mayor * d_menor) / 2;
    
    // Perímetro: Suma de sus cuatro lados iguales
    perimetro = lado * 4;
    
    // Salida de resultados con formato de 2 decimales
    printf("\n----------------------------------------\n");
    printf("El area del rombo es: %.2lf\n", area);
    printf("El perimetro del rombo es: %.2lf\n", perimetro);
    printf("----------------------------------------\n");
    
    return 0;
}
