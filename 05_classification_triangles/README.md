# Program 5: Triangle Classifier

![C Logic](https://img.shields.io/badge/C_Logic-Program_05-00599C?labelColor=2b2b2b&style=flat-square)

This project is a CLI application that determines if three given lengths can form a valid triangle and, if so, classifies it based on its side proportions (Equilateral, Isosceles, or Scalene).

The technical focus of this exercise is the implementation of mathematical theorems using compound logical operators. The program first applies the Triangle Inequality Theorem using the logical AND (`&&`) operator within a boolean-equivalent returning function to validate the geometry. Once validated, it utilizes the logical OR (`||`) operator alongside `if-else if` control structures to evaluate the equality of the sides and categorize the shape. The architecture maintains strict modularity, separating the validation logic from the classification and display outputs.

## Example Output
```text

CLASSIFICATION OF TRIANGLES
This program asks you for the lengths of three sides and determines if the triangle is equilateral, isosceles, or scalene. 

Author: Rosas Vazquez Eduardo

press ENTER to continue...

Enter the value for side A: 5.5
Enter the value for side B: 5.5
Enter the value for side C: 3.2


Isosceles triangle
