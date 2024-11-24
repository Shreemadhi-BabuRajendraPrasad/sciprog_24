GCD Program Using Euclidean Algorithm

Overview
This program computes the Greatest Common Divisor (GCD) of two integers using two approaches based on the Euclidean algorithm:

Iterative approach: Using a loop to compute the GCD.

Recursive approach: Using recursion to compute the GCD.

The program accepts two integers as input from the user and calculates the GCD using both methods.

Filename: practical08.c

In this program 
The Euclidean algorithm for GCD works as follows:

If b=0, return a.
Otherwise, replace a with b and 𝑎 mod b
This continues until b = 0 and a will be the GCD of intergers.

For Compiling
gcc practical08.c -o practical08

For Execution:
./out

OUTPUT: 
Enter two numbers: 40 25
GCD of 48 and 18 (Iterative) is: 5
GCD of 48 and 18 (Recursive) is: 5