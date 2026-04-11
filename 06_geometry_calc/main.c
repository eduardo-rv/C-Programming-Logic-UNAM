#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

void ClearScreen();
void Display();
int Options();
void Calculator(int choice);


int main()
{
	int choice;

	Display();


	do
	{
		choice = Options();
		if(choice != 6)
		{
			Calculator(choice);
		}

	}while(choice < 6);
	
	printf("\nExiting program.\n\n");
	return 0;
}

void ClearScreen()
{
	printf("\n\npress ENTER to continue...");
	while(getchar() != '\n');
	getchar();
	system("clear");
}

void Display()
{
	printf("Geometry calculator\n");
	printf("Description: This program is a Geometry Calculator. It allows you to select a geometric shape from a menu to calculate its area and perimeter.\n\n");
	printf("Author: Rosas Vazquez Eduardo\n\n");

	printf("press ENTER to continue...");
	getchar();
	system("clear");

}	

int Options()
{
	int choice;

	printf("1. Circle\n");
	printf("2. Rectangle\n");
	printf("3. Triangle\n");
	printf("4. Rhombus\n");
	printf("5. Trapezoid\n");
	printf("6. Exit\n");
	printf("Select an option: ");
	scanf("%d", &choice);
	
	return choice;
}

void Calculator(int option)
{
	float major_base, minor_base, major_diagonal, side1, side2, minor_diagonal, area, perimeter, radius, base, height;  

	switch(option)
	{
		case 1:
			printf("\n\nEnter the radius: ");
			scanf("%f", &radius);
	
			area = PI * radius * radius;
			perimeter = 2 * PI * radius;

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f\n\n", perimeter);
			
			break;
		case 2:
			printf("\n\nEnter base: ");
			scanf("%f", &base);
			printf("Enter height: ");
			scanf("%f", &height);

			area = base * height;
			perimeter = 2 * (base + height);

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f", perimeter);

			break;
		case 3:
			printf("\n\nEnter base: ");
			scanf("%f", &base);
			printf("Enter height: ");
			scanf("%f", &height);
			printf("Enter side 1: ");
			scanf("%f", &side1);
			printf("Enter side 2: ");
			scanf("%f", &side2);

			area = (base * height)/2;
			perimeter = (base + side1 + side2);

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f", perimeter);

			break;
		case 4:
			printf("\n\nEnter major diagonal: ");
			scanf("%f", &major_diagonal);
			printf("Enter minor diagonal: ");
			scanf("%f", &minor_diagonal);
			printf("Enter side: ");
			scanf("%f", &side1);

			area = (major_diagonal * minor_diagonal)/2;
			perimeter = side1 * 4;

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f", perimeter);

			break;
		case 5:
			printf("\nEnter major base: ");
			scanf("%f", &major_base);
			printf("Enter minor base: ");
			scanf("%f", &minor_base);
			printf("Enter height: ");
			scanf("%f", &height);
			printf("Enter the two non-parallel sides: ");
			scanf("%f %f", &side1, &side2);

			area = ((major_base + minor_base) * height) / 2;
			perimeter = major_base + minor_base + side1 + side2;

			printf("\n\nArea = %.2f", area);
			printf("\nPerimeter = %.2f", perimeter);

			break;
		case 6:
			break;
	}

	ClearScreen();
}
