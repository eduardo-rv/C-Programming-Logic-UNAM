/* * Ejercicio: Conversor de Divisas (Dólares a Pesos)
 * Materia: Programación I - UNAM FES Acatlán
 * Alumno: Eduardo Rosas Vazquez
 * Descripción: Programa que utiliza una función para realizar la conversión 
 * de moneda extranjera a moneda nacional.
 */

#include <stdio.h>
#include <stdlib.h>

// Funcion para mostrar la caratula del proyecto 
void caratula() 
{
    printf("Conversor de Moneda: USD a MXN\n");
    printf("Alumno: Eduardo Rosas Vazquez\n");
    printf("Materia: Programacion I - UNAM\n\n");
    
    printf("\nPresiona ENTER para comenzar el programa...");
    getchar();
}

// Funcion para realizar la operacion de conversion
float convertir(float dolares)
{
    // Tipo de cambio fijo para el ejercicio
    float dolar = 18.37;
    float pesos;
    
    // Proceso de conversion
    pesos = dolares * dolar;
    
    // Devolver resultado al main
    return pesos;
}

int main()
{
    // Presentacion inicial
    caratula();
    
    // Limpieza de pantalla inicial
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    // Variables locales
    float dolares;
    float resultado;
    
    printf("CONVERTIR DOLARES A PESOS\n\n");
    printf("Ingresa la cantidad de dolares a convertir: ");
    scanf("%f", &dolares);
    
    // Limpieza antes de mostrar el resultado
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    // Llamada a la funcion y muestra de resultados
    resultado = convertir(dolares);
    
    printf("----------------------------------------\n");
    printf("RESULTADO FINAL\n");
    printf("%.2f USD equivalen a: %.2f MXN\n", dolares, resultado);
    printf("\n----------------------------------------\n");
    
    return 0;
}
