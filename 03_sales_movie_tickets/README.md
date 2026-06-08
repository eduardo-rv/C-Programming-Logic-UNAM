# Program 3: Movie Ticket Sales System

![C Logic](https://img.shields.io/badge/C_Logic-Program_03-00599C?labelColor=2b2b2b&style=flat-square)

This project is a CLI application that simulates a movie ticket pre-sale system. It provides a navigational menu for users to select a film, calculates the total cost based on the specific movie's pricing, and automatically applies a 35% discount for bulk purchases exceeding 25 tickets.

The technical focus of this exercise introduces memory addresses and function prototyping. By utilizing pointers (*option, *amount), the program passes variables by reference into a void function, allowing multiple state changes to occur simultaneously without returning a value. Furthermore, the logic implements switch statements to manage menu routing efficiently and conditional statements to evaluate business logic thresholds for the discount system.

## Example Output
```text
Sale of movie tickets
Description: Basic ticket pre-sale system that allows you to choose between four movies through a menu.
It calculates the total to pay and applies a .35 discount on purchases of more than 25 tickets.

Student: Rosas Vazquez Eduardo
Course: Programming I - UNAM

Press ENTER to start the program...

1. Gol.__________ 100
2. Gol 2_________ 200
3. In undertow___ 300
4. Next of kin___ 400
Eneter your choice: 1
Enter amount: 30

Total a pagar: 1950.00
