# Program 7: PI Estimator

![C Logic](https://img.shields.io/badge/C_Logic-Program_07-00599C?labelColor=2b2b2b&style=flat-square)

This project is a CLI application that estimates the mathematical constant PI ($\pi$) based on user-defined precision. The program calculates the value by processing a specific number of terms through the Gregory-Leibniz infinite series.

The technical focus of this application is iterative mathematical computation and standard input buffer management. The logic utilizes a "for" loop to build the series, employing the modulo operator ("%") to alternate the arithmetic sign (+/-) for every iteration. To ensure high calculation accuracy, the application strictly uses double-precision floating-point variables ("double"). Furthermore, the codebase implements a robust, low-level buffer clearing function (while ((c = getchar()) != '\n' && c != EOF);) that safely discards residual input characters, preventing undefined behavior or skipped prompts during sequential standard inputs.

## Example Output
```text
PI calculator.
Description: This tool calculates PI by summing a series of fractions. The precision increases as more terms are added to the calculation.

Author: Rosas Vazquez Eduardo.

press ENTER to continue...

Enter the number of terms to calculate PI: 100000


Estimation finished for 100000 terms.
Estimated value of PI: 3.1415826536
