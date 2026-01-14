#include <stdio.h>
#include <stdlib.h>


// funcion presentacion 
void caratula() 
{
    printf("Calculo de Area y Perimetro: Rombo\n");
    printf("Alumno: Eduardo Rosas Vazquez\n");
    printf("Materia: Programacion II - UNAM\n\n");
    
    printf("\nPresiona ENTER para comenzar el programa...");
    getchar();
}

// funcion conversion
float convertir(float dolares)
{
    //variables
    float dolar = 18.37;
    float pesos;
    
    //convertir dolares por la cantidad de pesos ingresada
    pesos = dolares * dolar;
    
    //devolver resultado
    return pesos;
}

int main()
{
    //presentacion 
    caratula();
    
    // Limpieza de pantalla (funciona en Linux/macOS, en Windows de Dev-C++ es "cls")
    #ifdef _WIN32
    system("cls");   // Si es Windows, usa cls
    #else
    system("clear"); // Si es Linux o Mac, usa clear
    #endif
    
    //variables
    float dolares;
    float resultado;
    
    printf("CONVERTIR DOLARES A PESOS\n\n");
    printf("Ingresa la cantidad de dolares a convertir: ");
    scanf("%f", &dolares);
    
    // Limpieza de pantalla (funciona en Linux/macOS, en Windows de Dev-C++ es "cls")
    #ifdef _WIN32
    system("cls");   // Si es Windows, usa cls
    #else
    system("clear"); // Si es Linux o Mac, usa clear
    #endif
    
    resultado = convertir(dolares);
    printf("RESULTADO\n\n");
    printf("%.2f USD = %.2f MXN", dolares, resultado);
    
    return 0;
}
