# 🧮 Matrix Operations with Templates in C++

This project demonstrates various **matrix operations** using **C++ templates**, including functionalities like **matrix creation**, element input/output, diagonal extraction, and matrix addition.

## 🌟 Features

### 1. **Matrix Class** (`Matris<T>`)
- **Generic Template Support:** Operates on any data type (e.g., `int`, `float`, `double`).
- **Dynamic Memory Allocation:** Ensures memory efficiency by allocating matrix storage dynamically.
- **Core Functionalities:**
  - `elemanlariGir()`: Accepts user input for the matrix elements.
  - `elemanlariYazdir()`: Displays matrix elements in a tabular format.
  - `anaKosegenYazdir()`: Extracts and displays the main diagonal.
  - `tersKosegenYazdir()`: Extracts and displays the anti-diagonal.

### 2. **Matrix Addition Class** (`MatrisToplayici<T>`)
- **Dimension Validation:** Ensures matrices have compatible dimensions before addition.
- **Efficient Operations:** Performs element-wise addition and displays the resulting matrix.

### 3. **Error Handling**
- Validates matrix dimensions for compatibility.
- Provides user-friendly error messages if operations cannot be performed.

---

## 📖 Code Overview

### Matris Class
A template-based implementation of a matrix with key functionalities:
- **Constructor:** Dynamically allocates memory and initializes all elements to `0`.
- **Destructor:** Frees the allocated memory to prevent memory leaks.
- **Functions:**
  - `elemanlariGir()`: Allows users to input matrix elements.
  - `elemanlariYazdir()`: Outputs the matrix in a structured layout.
  - `anaKosegenYazdir()`: Prints the main diagonal elements.
  - `tersKosegenYazdir()`: Prints the anti-diagonal elements.

### MatrisToplayici Class
A helper class for matrix addition:
- **Functionality:**
  - `toplamMatris(Matris<T>& m1, Matris<T>& m2)`: Computes the sum of two matrices and displays the result.
- **Dimension Validation:** Checks if the dimensions of both matrices are compatible before performing addition.

---

## 🚀 How to Use

1. **Input Matrix Dimensions:**
   - Specify the number of rows and columns for two matrices.

2. **Input Matrix Elements:**
   - Enter the values for each matrix element interactively.

3. **Operations Performed:**
   - Display the **main diagonal** and **anti-diagonal** of each matrix.
   - Compute and display the **element-wise sum** of the matrices (if compatible).

---
💡 Requirements
- A C++ compiler (e.g., GCC)
Basic understanding of:
- C++ Templates
- Object-Oriented Programming (OOP)
  
✨ Author Developed with ❤️ by Alaattin Uysal.
