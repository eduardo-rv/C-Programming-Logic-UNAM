# Program 01: Rhombus Area and Perimeter Calculator

## Assignment
> Create a C program that calculates both the **Area** and **Perimeter** of a rhombus. The program must interact with the user to collect the necessary geometric dimensions and display the calculated results clearly in the terminal.



## Requirements
> The program must prompt the user to enter the Major Diagonal ($D$), the Minor Diagonal ($d$), and the length of one side ($s$).  
> Apply the standard geometric formulas for a rhombus.  
> Include a header with student and course information.  
> Implement a "Clear Screen" block (compatible with both Windows and Linux) to maintain a clean terminal environment.  
> Display the final results using exactly 2 decimal places.



## Mathematical Formulas
> Area ($A$):** $$A = \frac{D \times d}{2}$$  

> Perimeter ($P$):** $$P = s \times 4$$



## Challenges
> 1.Add logic to check if the user inputs are positive numbers. If a negative number is entered, display an error message.  
> 2.If only the diagonals ($D$ and $d$) are provided, calculate the side ($s$) automatically using the Pythagorean theorem:  
$$s = \sqrt{\left(\frac{D}{2}\right)^2 + \left(\frac{d}{2}\right)^2}$$
