#include <stdio.h>
#include <stdlib.h>

// funcion presentacion
void caratula() 
{
    printf("Venta De Boletos De Cine\n");
    printf("Alumno: Eduardo Rosas Vazquez\n");
    printf("Materia: Programacion I - UNAM\n\n");
    
    printf("\nPresiona ENTER para comenzar el programa...");
    getchar();
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
    
    int opcion, boletos;
    float precio;
    
    puts("MENU DE PELICULAS\n");
    
    puts("1. Gol = $100");
    puts("2. Evasion o Victoria = $150");
    puts("3. Quiero ser como Beckan = $200");
    puts("4. El milagro de Berna = $250\n");
    
    printf("Elige una opcion: ");
    scanf("%d",&opcion);
    
    
    if ((opcion > 0) && (opcion <= 4))
    {
        printf("Ingrese la cantidad de boletos a comprar: ");
        scanf("%d",&boletos);
        
        // Limpieza de pantalla (funciona en Linux/macOS, en Windows de Dev-C++ es "cls")
        #ifdef _WIN32
        system("cls");   // Si es Windows, usa cls
        #else
        system("clear"); // Si es Linux o Mac, usa clear
        #endif
        
        switch (opcion)
        {
            case 1:
            precio = 100;
            break;
            
            case 2:
            precio = 150;
            break;
            
            case 3: 
            precio = 200;
            break;
            
            case 4:
            precio = 250;
        }
        
        if (boletos > 25)
        {
            printf("Total a pagar: $%f",(boletos*precio)-((boletos*precio)*.35));
        }
        else
        {
            printf("Total a pagar: $%f", boletos*precio);
        }
    }
    else
    {
        // Limpieza de pantalla (funciona en Linux/macOS, en Windows de Dev-C++ es "cls")
        #ifdef _WIN32
        system("cls");   // Si es Windows, usa cls
        #else
        system("clear"); // Si es Linux o Mac, usa clear
        #endif
        printf("ERROR\nElige una opcion valida (1-2-3-4).");
    }
    return 0;
}
