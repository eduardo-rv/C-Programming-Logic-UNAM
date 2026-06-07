# Program 1: Rhombus Area

![C Logic](https://img.shields.io/badge/C_Logic-Program_01-00599C?labelColor=2b2b2b&style=flat-square)

This project is a CLI application written in C that calculates the area and perimeter of a rhombus. It serves as an introductory exercise in standard input/output operations, variable assignment, and basic mathematical execution within a compiled language.

The technical focus of this script includes data type handling using double-precision floating-point formats ("%lf") and cross-platform terminal management. It implements a preprocessor directive block ("#ifdef _WIN32") to determine the host operating system at compile time and execute the appropriate screen-clearing command. Additionally, the code utilizes a custom void function to modularize the initial presentation banner, keeping the main execution block clean and focused on calculation logic.

## Example Output
```text
Area and Perimeter Calculation: Rhombus
Student: Eduardo Rosas Vazquez
Course: Programming I - UNAM

Press ENTER to start the program...

Enter the Major Diagonal (D): 10
Enter the Minor Diagonal (d): 8
Enter the measurement of one side: 6.4

----------------------------------------
The area of the rhombus is: 40.00
The perimeter of the rhombus is: 25.60
----------------------------------------
