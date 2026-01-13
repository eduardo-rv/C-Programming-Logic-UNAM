#include <stdio.h>
#include <stdlib.h>

// Funcion para mostrar la caratula del proyecto
void caratula() {
    
    printf("Calculo de Area y Perimetro: Rombo\n");
    printf("Alumno: Eduardo Rosas Vazquez\n");
    printf("Materia: Programacion I - UNAM\n\n");
    
    printf("\nPresiona ENTER para comenzar el programa...");
    getchar();
}

int main() {
    // Llamada a la funcion inicial
    caratula();
    
    // Limpieza de pantalla (funciona en Linux/macOS, en Windows de Dev-C++ es "cls")
    #ifdef _WIN32
    system("cls");   // Si es Windows, usa cls
    #else
    system("clear"); // Si es Linux o Mac, usa clear
    #endif
    
    double D_mayor, d_menor, lado, area, perimetro;
    
    printf("Introduce la Diagonal Mayor (D): ");
    scanf("%lf", &D_mayor);
    
    printf("Introduce la Diagonal Menor (d): ");
    scanf("%lf", &d_menor);
    
    printf("Introduce la medida de uno de los lados: ");
    scanf("%lf", &lado);
    
    // Proceso logico corregido
    // Formula del area: (D * d) / 2
    area = (D_mayor * d_menor) / 2;
    
    // Formula del perimetro: Lado * 4
    perimetro = lado * 4;
    
    printf("El area del rombo es: %.2lf\n", area);
    printf("El perimetro del rombo es: %.2lf\n", perimetro);
    
    return 0;
}
