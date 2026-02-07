/*
 * Exercise: Geometry Calculation (Rhombus)
 * Course: Programming I - UNAM FES Acatlán
 * Student: Eduardo Rosas Vazquez
 * Description: Basic calculator for rhombus area and perimeter.
 */

#include <stdio.h>
#include <stdlib.h>

// Function to display the project header
void display_header() 
{
    printf("Area and Perimeter Calculation: Rhombus\n");
    printf("Student: Eduardo Rosas Vazquez\n");
    printf("Course: Programming I - UNAM\n\n");
    
    printf("\nPress ENTER to start the program...");
    getchar();
}

int main() 
{
    // Initial student presentation
    display_header();
    
    // Compatibility block for screen clearing
    #ifdef _WIN32
        system("cls");   
    #else
        system("clear"); 
    #endif
    
    // Variable definitions
    double major_diagonal, minor_diagonal, side, area, perimeter;
    
    // User input section
    printf("Enter the Major Diagonal (D): ");
    scanf("%lf", &major_diagonal);
    
    printf("Enter the Minor Diagonal (d): ");
    scanf("%lf", &minor_diagonal);
    
    printf("Enter the measurement of one side: ");
    scanf("%lf", &side);
    
    // Mathematical calculations
    // Area: Major diagonal times minor diagonal divided by 2
    area = (major_diagonal * minor_diagonal) / 2;
    
    // Perimeter: Sum of its four equal sides
    perimeter = side * 4;
    
    // Output results with 2 decimal places
    printf("\n----------------------------------------\n");
    printf("The area of the rhombus is: %.2lf\n", area);
    printf("The perimeter of the rhombus is: %.2lf\n", perimeter);
    printf("----------------------------------------\n");
    
    return 0;
}
