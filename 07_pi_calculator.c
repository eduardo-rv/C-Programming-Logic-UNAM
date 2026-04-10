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
	while(getchar() != '\n');
	getchar();
	system("clear");
}

void Display()
{
	printf("PI calculator.\n");
	printf("Description: This tool calculates PI by summing a series of fractions. The precision increases as more terms are added to the calculation.\n\n");

	printf("Author: Rosas Vazquez Eduardo.");

	printf("press ENTER to continue...");
	getchar();
	system("clear");
}
