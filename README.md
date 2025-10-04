# Implementation-of-Recursion-in-CPP
Aim: Implementation of recursion in C++

Software: Mingw CPP compiler, VS code , Online C/C++ compiler

Program 1 Factorials
Explanation of code with theory: This C++ program calculates the factorial of a given number using recursion. The function funf(int a) returns 1 when a equals 1, serving as the base case. Otherwise, it multiplies a by the factorial of a-1, recursively calling itself. In main(), the user inputs a number d, which is passed to funf(). The result is printed as the factorial of d. For example, inputting 10 yields 3628800, since 10! = 10×9×8×...×1. This recursive approach is elegant and concise, though for large inputs, iterative methods or tail recursion may be more efficient.

Algorithm:

Start
Input number d
If d == 1, return 1
Else return d * funf(d - 1)
Display result
End
Program 2 Sum of integers
Explanation of code with theory: This C++ program calculates the sum of the first d natural numbers using recursion. The function funf(int a) returns 1 when a == 1, serving as the base case. Otherwise, it adds a to the result of funf(a - 1), recursively summing all integers down to 1. In main(), the user inputs a number d, which is passed to funf(). For example, inputting 10 returns 55, since 1 + 2 + ... + 10 = 55. This recursive approach is simple and intuitive, though for large d, an iterative loop or direct formula n(n+1)/2 may be more efficient.

Algorithm:

Start
Input number d
If d == 1, return 1
Else return d + funf(d - 1)
Display result
End
Program 3 Printing string in reverse
Explanation of code with theory: This C++ program prints a string in reverse using recursion. The function funf(char *a) checks if the current character is not the null terminator ('\0'). If true, it recursively calls itself with the next character (a+1). After reaching the end of the string, it prints characters during the unwinding phase of recursion, effectively reversing the string. In main(), the user inputs a string into d, which is passed to funf(). For example, inputting "harsh" prints "hsrah", as the characters are output in reverse order. This method elegantly demonstrates how recursion can traverse and reverse a string.

Algorithm:

Start
Input string d
If current character is not '\0', call function with next character
Print current character after recursive call
Display reversed string
End
Program 4 Printing integer in reverse
Explanation of code with theory: This C++ program reverses the digits of an integer using recursion. The function print_rev(int i) prints the last digit of i using i % 10, then recursively calls itself with i / 10, effectively stripping off the last digit each time. The base case is when i becomes 0, ending the recursion. In main(), the user inputs a number, which is passed to print_rev(). For example, inputting 1234567890 prints 0987654321. This approach leverages the call stack to reverse the order of digit output, demonstrating a clean and elegant use of recursion for digit manipulation.

Algorithm:

Start
Input number i
If i > 0, print i % 10
Recursively call function with i / 10
Display reversed digits
End
Conclusion
Across all four programs, recursion is used as a powerful tool to solve distinct problems—factorial calculation, summation of natural numbers, string reversal, and digit reversal. Each code demonstrates how recursive logic can simplify complex tasks by breaking them into smaller, manageable steps. Whether it's multiplying down to 1, adding up to a given number, unwinding a string character by character, or peeling off digits from an integer, recursion offers clarity and elegance. These examples highlight its versatility in both mathematical and string-based operations, reinforcing its value in algorithmic thinking and foundational programming. Together, they form a strong conceptual toolkit.
