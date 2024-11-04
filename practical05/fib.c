#include <stdio.h>

// Function to calculate the next Fibonacci number
void fibonacci_next() {
    int f_1, f_2;
    int temp = f_1 + f_2;
    f_2 = f_1;
    f_1 = temp;
}

int main() {
    int num;
    printf("Enter the value of n for the Fibonacci series: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Initialize the first two Fibonacci numbers
    int f0 = 0, f1 = 1;
    printf("Fibonacci series up to %d terms:\n", num);
    printf("%d %d ", f0, f1);

    for (int i = 2; i < num; i++) {
        fibonacci_next(&f1, &f0);
        printf("%d ", f1);
    }
    printf("\n");

    return 0;
}
