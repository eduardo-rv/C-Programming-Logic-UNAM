# Program 6: Geometry Calculator

![C Logic](https://img.shields.io/badge/C_Logic-Program_06-00599C?labelColor=2b2b2b&style=flat-square)

This project is an interactive CLI application that allows users to continuously calculate the area and perimeter of various geometric shapes (circle, rectangle, triangle, rhombus, and trapezoid) through a navigational menu.

The technical focus of this application is state maintenance and input buffer management. The program utilizes a "do-while" loop to keep the execution running continuously until the user explicitly selects the exit condition. The menu logic is routed using a "switch" statement that handles the specific mathematical formulas and variable requirements for each shape. Furthermore, it defines mathematical constants using preprocessor macros ("#define PI") and implements a "while(getchar() != '\n');" loop to manually flush the standard input buffer, preventing skipped inputs caused by lingering newline characters from previous "scanf" calls.

## Example Output
```text
1. Circle
2. Rectangle
3. Triangle
4. Rhombus
5. Trapezoid
6. Exit
Select an option: 1


Enter the radius: 5


Area = 78.54
Perimeter = 31.42


press ENTER to continue...
