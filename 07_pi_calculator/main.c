#include <stdio.h>
#include <stdlib.h>

void ClearScreen();
void ClearBuffer();
void Display();
int GetTerms();
double CalculatePI(int terms);

int main()
{
	Display();

	int terms;
	double pi_result;

	terms = GetTerms();

	if(terms <= 0)
	{
		printf("\nError: The number of terms must be grater than 0.\n\n");
	}
	else
	{
		pi_result = CalculatePI(terms);

		printf("\n\nEstimation finished for %d terms.", terms);
		printf("\nEstimated value of PI: %.10f\n\n", pi_result);
	}


	
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

	printf("Author: Rosas Vazquez Eduardo.\n\n");

	printf("press ENTER to continue...");
	getchar();
	system("clear");
}

void ClearBuffer()
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

int GetTerms()
{
	int user_terms;
	printf("Enter the number of terms to calculate PI: ");
	scanf("%d", &user_terms);
	
	ClearBuffer();
	return user_terms;
}

double CalculatePI(int terms)
{
	double sum = 0.0;
	double denominator;

	for(int i = 0; i < terms; i++)
	{
		denominator = (2.0 * i) + 1.0;

		if(i % 2 == 0)
		{
			sum += 1.0 / denominator;
		}
		else
		{
			sum -= 1.0 / denominator;
		}
	}

	return sum * 4;
}
