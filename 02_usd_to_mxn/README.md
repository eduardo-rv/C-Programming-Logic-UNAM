# Program 02: Currency Converter (USD to MXN)

![C Logic](https://img.shields.io/badge/C_Logic-Program_02-00599C?labelColor=2b2b2b&style=flat-square)

This project is a CLI application designed to perform fixed-rate currency conversions from US Dollars (USD) to Mexican Pesos (MXN).

The technical focus of this exercise is procedural modularity and function parameterization. Instead of executing the entirety of the logic within the "main()" block, the architecture is divided into distinct, single-purpose functions. It utilizes a "float" returning function to capture and pass user input, and a "void" function that accepts parameters to execute the mathematical conversion and print the results. Additionally, the standard output limits decimal rendering using specific floating-point precision formatters (%.2f).

## Example Output
```text
Currency Convert: USD to MXN
Student: Eduardo Rosas Vazquez
Course: Programing I - UNAM

Press ENTER to start the program... 

Amount to convert: 50.50
50.50 USD = 909 MXN
