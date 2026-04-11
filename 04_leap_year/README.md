# Program 04: Leap Year Checker

## 📝 Assignment
Write a C program that determines whether a specific year entered by the user is a **Leap Year** or a **Common Year**. This exercise focuses on implementing conditional logic using nested `if` statements and the modulo operator (`%`).



## 🛠 Requirements
1. **User Input:** Prompt the user to enter a year (integer).
2. **Logic Implementation:** Use the rules of the Gregorian calendar to verify the leap year status:
   - A year is a leap year if it is divisible by 4.
   - However, if it is divisible by 100, it must also be divisible by 400 to be a leap year.
3. **User Interface:** Include a program description and a header. Use a custom `ClearScreen` function to handle terminal transitions.
4. **Modularity:** Separate the calculation logic into its own function (`CalculateYear`).



## 📐 Mathematical Logic
A year is a leap year if it satisfies the following conditions:
1. $Year \pmod 4 = 0$
2. $Year \pmod{100} \neq 0$ (Unless $Year \pmod{400} = 0$)



## 🚀 Challenges
1. **Logic Refactoring:** In this version, we use nested `if` statements. Can you rewrite the entire logic using a single `if` statement with logical operators (`&&` and `||`)?
   - *Hint:* `if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))`
2. **Input Sanitization:** Add a check to ensure the year entered is a positive number (e.g., AD years only).
3. **Range Checker:** Modify the program to print all leap years between two years entered by the user (e.g., between 2000 and 2050).
