# Program 07: PI Estimation (Leibniz Series)

## Assignment
> Create a program that estimates the value of $\pi$ (Pi) using the **Gregory-Leibniz series**. The program should allow the user to specify the number of terms to be used in the summation, demonstrating how the estimation becomes more accurate as the number of iterations increases.



## Requirements
> Use the `double` data type for calculations to ensure high precision in the resulting estimate.  
> Prompt the user for a positive integer representing the number of terms ($n$).  
> Use a `for` loop to iterate through the series, alternating between addition and subtraction for each term.  
> Implement a **Buffer Clear** function to prevent issues with subsequent inputs and handle potential errors if the user enters 0 or negative numbers.  
> Display the final estimated value of $\pi$ with at least 10 decimal places.  



## Mathematical Logic
> The program implements the Gregory-Leibniz formula:  
> $$\pi = 4 \times \sum_{i=0}^{n-1} \frac{(-1)^i}{2i + 1} = 4 \times \left( 1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \frac{1}{9} \dots \right)$$  

> As $n \to \infty$, the result converges to the true value of $\pi$.



## Challenges
> Compare your result with the constant `M_PI` from the `<math.h>` library and calculate the percentage of error.  
> Measure how long the CPU takes to calculate 10,000,000 terms using the `<time.h>` library.  
> Modify the program to ask the user for a desired precision (e.g., $0.0001$) instead of a number of terms, and have the loop run until that accuracy is achieved.
