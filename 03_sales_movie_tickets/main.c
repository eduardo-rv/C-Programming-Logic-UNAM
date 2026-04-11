#include <stdio.h>
#include <stdlib.h>


void Display_header();
void Movie_main(int *option, int *amount);
float Calculate(int option, int amount);
float Discount(float total, int amount);

int main()
{
	//variables
	int option, amount;
	float total;

	//Initial presentation
	Display_header();

	Movie_main(&option, &amount);

	total = Calculate(option, amount);

	total = Discount(total, amount);
	printf("\nTotal a pagar: %.2f\n\n", total);
	return 0;
}


void Display_header()
{
	printf("\nSale of movie tickets\n");
	printf("Description: Basic ticket pre-sale system that allows you to choose between four movies through a menu.\n" 
		"It calculates the total to pay and applies a .35 discount on purchases of more than 25 tickets.\n\n");
	
	printf("Student: Rosas Vazquez Eduardo\n");
	printf("Course: Programming I - UNAM\n\n");

	printf("Press ENTER to start the program...");
	getchar();

	system("clear");
}

void Movie_main(int *option, int *amount)
{

	printf("1. Gol.__________ 100\n");
	printf("2. Gol 2_________ 200\n");
	printf("3. In undertow___ 300\n");
	printf("4. Next of kin___ 400\n");
	printf("Eneter your choice: ");
	//fflush(stdin);
	scanf("%d", option);

	printf("Enter amount: ");
	scanf("%d", amount);

	system("clear");
}

float Calculate(int option, int amount)
{
	float total;
	
	switch (option)
	{	
		case 1:
			total = 100 * amount;
			break;
		case 2:
			total = 200 * amount;
			break;
		case 3:
			total = 300 * amount;
			break;
		case 4:
			total = 400 * amount;
			break;
		defaul:
			printf("Error");
	}

	return total;

}

float Discount(float total, int amount)
{
	if(amount > 25)
	{
		total = total - (total * .35);
		return total;
	}
	else
	{
		return total;
	}
}

