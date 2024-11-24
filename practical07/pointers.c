#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n) {
    if (n < 0) {
        printf("Error: negative number passed to factorial\n");
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(void) {
    int order;
    double *terms, e = 0.0;

    printf("Enter the required polynomial order\n");
    if (scanf("%d", &order) != 1) {
        printf("Did not enter a number\n");
        return 1;
    }

    terms = (double *)malloc(order * sizeof(double));
    if (terms == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Populate terms with the series terms 1/n!
    for (int i = 0; i < order; i++) {
        terms[i] = 1.0 / (double)factorial(i);
    }

    // Calculate the approximate value of e
    for (int i = 0; i < order; i++) {
        e += terms[i];
    }

    printf("e is estimated as %.10f, with difference %.10e\n", e, e - exp(1.0));

    free(terms);
    return 0;
}
