#include <stdio.h>
#include <stdlib.h>

void Clear_Screen();
void Display_header();


int main()
{
	Display_header();
	printf("Hello world");

	return 0;
}

void Clear_Screen()
{
	getchar();
	system("clear");
}

void Display_header()
{
	printf("\nCLASSIFICATION OF TRIANGLES\n");
	printf("This program asks you for the lengths of three sides and determines if the triangle is equilateral, isosceles, or scalene. \n\n");
	printf("Rosas Vazquez Eduardo\n\n");
	printf("press to ENTER to continue...");

	Clear_Screen();
}
