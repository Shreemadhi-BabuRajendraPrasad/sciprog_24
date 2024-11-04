#include <stdio.h>
#include <math.h>

// Function to calculate arctanh(x) using the Maclaurin series
double artanh1(double x, double delta) {
    double result = 0.0;
    double term = x;
    int n = 0;

    while (fabs(term) > delta) {
        result += term;
        n++;
        term = pow(x, 2 * n + 1) / (2 * n + 1);
    }
    return result;
}

// Function to calculate arctanh(x) using natural logarithms
double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}

int main() {
    double delta;
    printf("Enter a real positive number for delta (precision): ");
    scanf("%lf", &delta);

    printf("Comparing artanh(x) calculations using two methods:\n");

    for (double x = -0.9; x <= 0.9; x += 0.01) {
        double result1 = artanh1(x, delta);
        double result2 = artanh2(x);

        printf("x = %.2f, artanh1(x) = %.10f, artanh2(x) = %.10f\n", x, result1, result2);
    }

    return 0;
}
