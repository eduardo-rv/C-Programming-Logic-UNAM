# Program 03: Movie Ticket Sales System

## Assignment
> Create a basic ticket pre-sale system that allows users to select a movie from a menu and calculate the total price based on the quantity of tickets purchased. The program must apply a bulk discount if the purchase exceeds a specific threshold.



## Requirements
> Use a function to display the program description and header.  
> Use a function with **pointers** to capture multiple user inputs (movie choice and ticket amount) simultaneously.  
> Implement separate functions for price calculation and discount application.  
> Use a `switch` statement to handle the four different movie options and their respective prices.  
> Apply a **35% discount** only if the user buys more than **25 tickets**.  
> Clear the terminal screen between sections to keep the interaction clean.  



## Mathematical Logic
> $$Total = Price_{movie} \times Amount$$  

> (if Amount > 25):  
> $$Final Total = Total - (Total \times 0.35)$$



## Challenges
> Currently, if a user enters a number other than 1-4, the program might behave unexpectedly. Can you implement a "default" case or a loop to force a valid selection?  
> Modify the program so that "Matinee" tickets (mornings) have a lower price than "Evening" tickets.  
> Export the final transaction details (Movie name, quantity, subtotal, discount, and final total) into a simple `.txt` file using C file handling.  
