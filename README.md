# matrix-calculator-
A dynamic matrix calculator built with C++.
Dynamic Matrix Calculator
Overview
The Dynamic Matrix Calculator is a C++ program designed to perform matrix operations dynamically. It allows users to input matrices of varying sizes, populate them with values, and perform operations such as matrix addition, multiplication, and transposition. The program uses dynamic memory allocation to handle matrices of any size, making it flexible for real-world applications like engineering, physics, and computer graphics.

This project demonstrates the use of 2D dynamic arrays in C++ and includes proper memory management to prevent memory leaks.

Features
User-Defined Matrix Dimensions: Input custom row and column sizes for two matrices.
Dynamic Memory Allocation: Allocates memory for matrices based on user input.
Matrix Operations:
Addition: Adds two matrices (if they have the same dimensions).
Multiplication: Multiplies two matrices (if compatible: columns of the first matrix equal rows of the second).
Transpose: Computes the transpose of both input matrices.
Display Functionality: Neatly formatted output of matrices using setw for alignment.
Memory Management: Properly deallocates dynamically allocated memory to prevent leaks.
Requirements
Compiler: A C++ compiler (e.g., g++, Visual Studio, etc.) supporting C++11 or later.
Libraries: Standard C++ libraries (iostream, iomanip, string, conio.h for console I/O).
Operating System: Compatible with Windows, Linux, or macOS.
How to Use
Compile the Program:
Use a C++ compiler to compile the source code.
