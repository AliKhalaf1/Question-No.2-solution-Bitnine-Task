How to Run:
1. Compile the program using a C compiler (e.g., GCC, Clang, Visual C++).
   $ gcc -o main main.c

2. Execute the compiled binary to see the output.
   $ ./main

   
Functions implemented
1-Recursion method
2-Iterative method with an array
3- dynamic programming method

1-Recursion method
    advantages:
    It is easy to understand and implement.
    disadvantages:
    -It is inefficient as it involves repeated function calls and return values.
    -It is not recommended for large numbers. 

    
    Time complexity: O(2^n) 
    Space complexity:  O(n) 
This method is the most simple and easy to understand. It is also the most inefficient method. The time complexity of this method is O(2^n). This is because the function calls itself twice for every number. This method is not recommended for large numbers.

2-Iterative method with an array
    advantages:
    -It is efficient as it involves no function calls and return values.
    -It is recommended for large numbers.
    disadvantages:
    -It is difficult to understand and implement.
    -uses an array which takes up memory spaces
    -might cause Stack Overflow

    Time complexity: O(n)
    Space complexity:  O(n) 
    
3-dynamic programming method
    advantages:
    - It is efficient as it involves no function calls and return values.
    - avoides repeated calculations
    disadvantages:
    -might cause Stack Overflow
    -the array takes up memory space, For large values of n it might exceed the stack size.

    Time complexity: O(n)
    Space complexity:  O(n) 
