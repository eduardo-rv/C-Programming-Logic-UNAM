#include <stdio.h>
#include <stdlib.h>

void ClearScreen();
void Display();
void CalculateYear(int year);

int main()
{
	Display();
	
	int year;

	printf(" Enter a year: ");
	scanf("%d", &year);
	
	CalculateYear(year);

	return 0;
}

void CalculateYear(int year)
{
	int result;

	if((year%4) == 0)
	{
		if((year%100)!= 0)
		{
			if((year%400)==0)
			{
				printf("Is a leap year");
			}
			else
			{
				printf("Is not a leap year");
			}
		}
		else
		{
			printf("Is not a leap year");
		}
	}
	else
	{
        	printf("Is not leap year");
	}
}

void ClearScreen()
{
	getchar();
	system("clear");

}


void Display()
{

        printf("\n------LEAP YEAR-------\n\n");
        printf("This program asks you for a year and tells you if the entered year is leap or normal. \n\n");
        printf("Contreras Aviles José Raúl\n");
        printf("Rosas Vazquez Eduardo\n");
	printf("press enter to continue....");

        ClearScreen();

}
