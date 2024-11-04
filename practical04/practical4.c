#include <stdio.h>
#include <math.h>

int main() {
    int N = 12;
    float a = 0.0, b_deg = 60.0;
    float TanArr[N+1];
    float deg;

    // Calculate the area at pts x1, x2, ... x11 and add them up
    for(int i = 0; i <= N; i++) {
        deg = i * 5.0;
        TanArr[i] = tan((M_PI * deg) / 180.0);
        printf("TanArr[%d] = %f\n", i, TanArr[i]);
    }

    // Sum tan(a) + tan(b) where a and b are in radians
    float area = TanArr[0] + TanArr[N];
    printf("\nInitial area (sum at x(0) and x(12)) = %f\n", area);

    for(int i = 1; i < N; i++) {
        area += 2 * TanArr[i];
    }

    printf("\nThe value of the sum after the loop is: %f\n", area);

    // Multiply area by (pi/3) / 12 after converting it to radians
    float mult_rad = (M_PI * (b_deg - a) / (2 * N)) / 180.0;
    area = mult_rad * area;

    // Approximated result
    printf("\nTrapezoidal result is: %f\n", area);

    // Actual result
    // Integral of tan is ln(2)
    printf("Real result is: %f\n", log(2.0));

    return 0;
}
