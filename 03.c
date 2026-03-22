#include <stdio.h>
#include <stdlib.h>


void Display_header();


int main()
{
	//Initial presentation
	Display_header();

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

}
