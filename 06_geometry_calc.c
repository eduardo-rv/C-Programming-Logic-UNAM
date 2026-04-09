// mediante un menu de opciones, calcular el area y el perimetro de las siguientes figuras geometricas
// circulo, rectangulo, triangulo, rombo, trapecio. usar do while para seguir ejecutando hasta que el usuario quiera

#include <stdio.h>
#include <stdlib.h>

void ClearScreen();
void Display();

int main()
{
	Display();
	return 0;
}

void ClearScreen()
{
	printf("\n\npress ENTER to continue...");
	getchar();
	system("clear");
}

void Display()
{
	printf("titulo");
	printf("description");
	printf("Author: Rosas Vazquez Eduardo");

	ClearScreen();
}	
