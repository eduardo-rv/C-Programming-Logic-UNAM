// mediante un menu de opciones, calcular el area y el perimetro de las siguientes figuras geometricas
// circulo, rectangulo, triangulo, rombo, trapecio. usar do while para seguir ejecutando hasta que el usuario quiera

#include <stdio.h>
#include <stdlib.h>

void ClearScreen();
void Display();
int Options();
void Calculator(int option);


int main()
{
	int option;

	Display();


	do
	{
		option = Options();
		Calculator(option);

	}while(option < 6);

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
	printf("Geometry calculator\n");
	printf("This program is a Geometry Calculator. It allows you to select a geometric shape from a menu to calculate its area and perimeter.\n\n");
	printf("Author: Rosas Vazquez Eduardo");

	ClearScreen();
}	

int Options()
{
	int option;

	printf("1. Circle\n");
	printf("2. Rectangle\n");
	printf("3. Triangle\n");
	printf("4. Rhombus\n");
	printf("5. Trapezoid\n");
	printf("6. Exit\n");
	printf("Choose an option: ");
	scanf("%d", &option);
	
	return option;
}

void Calculator(int option)
{
	float major_diagonal, side, minor_diagonal, area, perimeter, radio, pi = 3.1416, base, height;  

	switch(option)
	{
		case 1:
			printf("\n\nEnter the value for radio: ");
			scanf("%f", &radio);
	
			area = pi * radio * radio;
			perimeter = 2 * pi * radio;

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f\n\n", perimeter);
			
			//pause
			break;
		case 2:
			printf("\n\nEnter the value for base: ");
			scanf("%f", &base);
			printf("\n\nEnter the value for height: ");
			scanf("%f", &height);

			area = base * height;
			perimeter = 2 * (base + height);

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f", perimeter);

			//pause
			break;
		case 3:
			printf("\n\nEnter the value for base: ");
			scanf("%f", &base);
			printf("\n\nEnter the value for height: ");
			scanf("%f", &height);

			area = (base * height)/2;
			perimeter = (base + height) * 2;

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f", perimeter);

			//pause
			break;
		case 4:
			printf("\n\nEnter the value for major diagonal: ");
			scanf("%f", &major_diagonal);
			printf("\n\nEnter the value for minor diagonal: ");
			scanf("%f", &minor_diagonal);
			printf("Enter the value for side");
			scanf("%f", &side);

			area = (major_diagonal * minor_diagonal)/2;
			perimeter = side * 4;

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f", perimeter);

			//pause
			break;
		case 5:
			printf("Trapezoid");
			break;
		case 6:
			break;
	}
}
