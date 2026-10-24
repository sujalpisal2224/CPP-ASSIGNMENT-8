# Practical Assignment 8: Exception Handling

## Student Details

- **Author:** Sujal Pisal
- **PRN:** 202501110013
- **Branch:** AIML
- **Class:** SY AIML
- **Division:** A
- **Batch:** A1

## 3. Problem Statement

Write a C++ program to demonstrate exception handling using `try`, `throw`, and `catch` statements to handle invalid age entered by the user.

## 7. Algorithm / Pseudocode

**START**

1. Declare an integer variable `age`.
2. Accept age from the user.
3. Enter the `try` block.
4. Check whether age is less than 0 or greater than 120.
5. If the age is invalid, throw an exception.
6. Otherwise, display the entered age.
7. Catch the exception and display an error message.
8. Display a message indicating that the program continues.
9. Stop the program.

**STOP**

## 8. Technology / Tools / Libraries Used

| Technology / Tool | Purpose |
|---|---|
| Programming Language | C++ |
| IDE / Platform | Dev C++ / VS Code |
| Libraries / Packages | iostream, iomanip |

## 9. Implementation / C++ Code

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age < 0 || age > 120)
        {
            throw age;
        }

        cout << "Valid age: " << age << endl;
    }
    catch (int)
    {
        cout << "Exception caught: Invalid age entered."
             << endl;
    }

    cout << "Program continues after exception handling."
         << endl;

    return 0;
}
```

## 10. Test Cases / Input and Output

| Test Case | Input | Expected Output | Actual Output | Status |
|---|---:|---|---|---|
| 1 | 19 | Valid age: 19 | Valid age: 19 | Pass |
| 2 | -5 | Exception caught: Invalid age entered. | Exception caught: Invalid age entered. | Pass |
| 3 | 150 | Exception caught: Invalid age entered. | Exception caught: Invalid age entered. | Pass |

## Screenshots / Graphs / Output

**Example 1: Valid Age**

```text
Enter your age: 19
Valid age: 19
Program continues after exception handling.
```

**Example 2: Invalid Age**

```text
Enter your age: -5
Exception caught: Invalid age entered.
Program continues after exception handling.
```

## 11. Results / Observations

The program successfully demonstrates exception handling in C++ using `try`, `throw`, and `catch` statements. When the entered age is less than 0 or greater than 120, an exception is thrown and an appropriate error message is displayed. For valid ages, the program displays the entered age. After handling the exception, the program continues execution.

## 12. Conclusion

This practical helped me understand exception handling in C++ and the use of `try`, `throw`, and `catch` statements. The program successfully handles invalid age inputs and demonstrates how exceptions can be caught to prevent abnormal program termination.

## 13. Assignment Questions

**Q1. What is exception handling in C++?**

Exception handling is a mechanism used to handle runtime errors in a program.

**Q2. What is the purpose of the `try` block?**

The `try` block contains code that may generate an exception.

**Q3. What is the purpose of the `throw` keyword?**

The `throw` keyword is used to generate an exception when an error occurs.
