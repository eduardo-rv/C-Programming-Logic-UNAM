# Program 06: Multi-Shape Geometry Calculator

## 📝 Assignment
Develop a menu-driven application in C that calculates the **Area** and **Perimeter** for various geometric shapes. The program should remain active, allowing the user to perform multiple calculations until they explicitly choose to exit.



## 🛠 Requirements
1. **Menu Navigation:** Implement a menu offering the following shapes:
   - Circle
   - Rectangle
   - Triangle
   - Rhombus
   - Trapezoid
2. **Persistent Execution:** Use a `do-while` loop to keep the program running until the "Exit" option is selected.
3. **Modular Control Flow:** - Use a function to manage the menu and return the user's choice.
   - Use a centralized `Calculator` function with a `switch` statement to handle different geometric logic.
4. **Formula Accuracy:** Use `#define` to establish a precise value for $\pi$ ($3.14159$).
5. **Clean Interface:** Ensure the screen is cleared after each calculation to provide a professional user experience.



## 📐 Geometric Formulas Included
- **Circle:** $A = \pi r^2$, $P = 2\pi r$
- **Rectangle:** $A = b \times h$, $P = 2(b + h)$
- **Triangle:** $A = \frac{b \times h}{2}$, $P = side_1 + side_2 + base$
- **Rhombus:** $A = \frac{D \times d}{2}$, $P = side \times 4$
- **Trapezoid:** $A = \frac{(B + b) \times h}{2}$, $P = B + b + side_1 + side_2$



## 🚀 Challenges
1. **Functional Decomposition:** Currently, the `Calculator` function is quite large. Try moving the logic for *each* shape into its own separate function (e.g., `void calculateCircle()`) to make the code even cleaner.
2. **Input Validation:** What happens if a user enters a negative radius or base? Add logic to prevent calculations with impossible dimensions.
3. **Advanced Shapes:** Add an option to calculate the volume of 3D shapes like a **Sphere** or a **Cube**.
