/* * PROGRAMA: Venta de Boletos de Cine
 * ALUMNO: Eduardo Rosas Vazquez
 * MATERIA: Programacion I - UNAM
 * DESCRIPCIÓN: Sistema básico de preventa de boletos que permite elegir entre 
 * cuatro películas mediante un menú. Calcula el total a pagar y aplica un 
 * descuento automático del 35% en compras mayores a 25 boletos.
 */

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
    // presentacion 
    caratula();
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    int opcion, boletos;
    float precio;
    
    puts("MENU DE PELICULAS\n");
    puts("1. Gol = $100");
    puts("2. Evasion o Victoria = $150");
    puts("3. Quiero ser como Beckham = $200");
    puts("4. El milagro de Berna = $250\n");
    
    printf("Elige una opcion: ");
    scanf("%d", &opcion);
    
    if ((opcion > 0) && (opcion <= 4))
    {
        printf("Ingrese la cantidad de boletos a comprar: ");
        scanf("%d", &boletos);
        
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
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
                break;
        }
        
        printf("----------------------------------------\n");
        if (boletos > 25)
        {
            printf("Total a pagar (con 35%% desc): $%.2f\n", (boletos * precio) * 0.65);
        }
        else
        {
            printf("Total a pagar: $%.2f\n", boletos * precio);
        }
        printf("----------------------------------------\n");
    }
    else
    {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        printf("ERROR\nElige una opcion valida (1-2-3-4).\n");
    }

    return 0;
}
