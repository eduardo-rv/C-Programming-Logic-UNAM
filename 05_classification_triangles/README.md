# Program 05: Triangle Classification

## Assignment
> Create a C program that requests the lengths of three sides from the user. The program must first validate if the given lengths can form a triangle and, if so, classify the triangle as **Equilateral**, **Isosceles**, or **Scalene**.



## Requirements
> Implement the Triangle Inequality Theorem to check if the three sides can actually form a triangle.  
> **Equilateral:** All three sides are equal.  
> **Isosceles:** At least two sides are equal.  
> **Scalene:** All three sides are different.  
> Use a function to validate the triangle (returning a boolean-like integer).  
> Use a separate function to perform the classification and display the result.  
> Include a clear header and a "Press ENTER to continue" mechanism to manage terminal flow.



## Mathematical Logic
### 1. Triangle Inequality Theorem
> A triangle is valid only if the sum of any two sides is greater than the third side:  
> $a + b > c$  
> $a + c > b$  
> $b + c > a$  

### 2. Classification Definitions
> **Equilateral:** $a = b = c$  
> **Isosceles:** $(a = b) \lor (b = c) \lor (a = c)$  
> **Scalene:** $a \neq b \land b \neq c \land a \neq c$



## Challenges
> If the triangle is valid, calculate its area using Heron's formula:  
> $Area = \sqrt{s(s-a)(s-b)(s-c)}$ where $s = \frac{a+b+c}{2}$ (semi-perimeter).  
> Add a check to prevent the user from entering zero or negative values.  
> Can you add a check to see if the triangle is also a **Right Triangle** using the Pythagorean theorem ($a^2 + b^2 = c^2$)?  
