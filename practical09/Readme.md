This program checks whether a given matrix is a magic square. A magic square is a square matrix where the sums of every row, column, and both diagonals are the same.

Requirements
GCC compiler
A text file containing the square matrix in the following format:
Each row of the matrix is on a new line.
Elements are space-separated.

Files
practical09.c: Contains the main() function.
magic_square.c: Contains the implementation of the isMagicSquare function.
magic_square.h: Header file with the function declaration.
magic_square.txt , not_magic_square.txt: Example input file for testing.

To compile
gcc practical09.c magic_square.c -o practical09

To execute
./practical09

Output:
The matrix is a magic square.
The matrix is not a magic square.
