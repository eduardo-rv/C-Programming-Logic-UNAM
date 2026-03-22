#include <stdio.h>
#include <stdlib.h>


void Display_header();


int main()
{
	//variables
	int option;

	//Initial presentation
	Display_header();

	option = Movie_main();
	return 0;
}


void Display_header()
{
	printf("\nSale of movie tickets\n");
	printf("Description: Basic ticket pre-sale system that allows you to choose between four movies through a menu.\n" 
		"It calculates the total to pay and applies a .35 discount on purchases of more than 25 tickets.\n\n");
	
	printf("Student: Rosas Vazquez Eduardo\n");
	printf("Course: Programming I - UNAM\n");

	printf("Press ENTER to start the program...");
	getchar();

	system("clear");
}

int Movie_main()
{
	int option;

	printf("1. Gol.\n");
	printf("2. Gol 2\n");
	printf("3. In undertow\n");
	printf("4. Next of kin\n");
	printf("Eneter your choice: ");
	//fflush(stdin);
	scanf("%d", &option);

	system("clear");

	return option;
}
