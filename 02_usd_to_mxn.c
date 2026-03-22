/* *Excercise: Currency Convert (USD to MXN)
* Course: Programming I - UNAM FES Acatlan
* Student: Eduardo Rosas Vazquez
* Description: Program that uses a function to perform currency conversion from foreign currency to national currency.)
*/

#include <stdio.h>
#include <stdlib.h>

//Function to display the project header
void display_header()
{
	printf("Currency Convert: USD to MXN\n");
	printf("Student: Eduardo Rosas Vazquez\n");
	printf("Course: Programing I - UNAM\n\n");

	printf("\nPress ENTER to start the program... ");
	getchar();

	system("clear");
}

float Convert()
{
	float amount;

	printf("Amount to convert: ");
	scanf("%f",&amount);

	return amount;
}

void USDtoMXN(float amount)
{
	float result;

	result = amount * 18;
	printf("%.2f USD = %2.f MXN\n\n", amount, result);
}

int main()
{
	//variables
	float amount;

	//Initial presentation
	display_header();

	amount = Convert();
	USDtoMXN(amount);

	return 0;
}


