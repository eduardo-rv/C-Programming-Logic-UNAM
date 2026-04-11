#include <stdio.h>
#include <stdlib.h>

void Clear_screen();
void Display_header();
int Validate_triangle(float a, float b, float c);
void Classify_triangle(float a, float b, float c);

int main()
{
	float side_a, side_b, side_c;
	int triangle;

	Display_header();
	
	printf("Enter the value for side A: ");
	scanf("%f", &side_a);
	printf("Enter the value for side B: ");
	scanf("%f", &side_b);
	printf("Enter the value for side C: ");
	scanf("%f", &side_c);
	
	triangle = Validate_triangle(side_a, side_b, side_c);

	if (triangle == 1)
	{
		Classify_triangle(side_a, side_b, side_c);
	}
	else
	{
		printf("\n\nIt is not a triangle\n\n");
	}
	


	return 0;
}

void Clear_screen()
{
	printf("\n\npress ENTER to continue...");
	getchar();
	system("clear");
}

void Display_header()
{
	printf("\nCLASSIFICATION OF TRIANGLES\n");
	printf("This program asks you for the lengths of three sides and determines if the triangle is equilateral, isosceles, or scalene. \n\n");
	printf("Author: Rosas Vazquez Eduardo");

	Clear_screen();
}

int Validate_triangle(float a, float b, float c)
{
	
	if(((a+b)>c) && ((a+c)>b) && ((b+c)> a))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Classify_triangle(float a, float b, float c)
{
	if(a == b && b == c)
	{
		printf("\n\nEquilateral triangle\n\n");
	}
	else if(a == b || b == c || a == c)
	{
		printf("\n\nIsosceles triangle\n\n");
	}
	else
	{
		printf("\n\nScalene triangle\n\n");
	}

}


