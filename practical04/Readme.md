Practical 4 - Calculating Tangent Values and Area Under the Curve
In this practical we find the area under the curve for tanh

filename: practical4.c

To compile the program:
gcc practical4.c -o out -lm

To excecute the program:
./out

OUTPUT:
TanArr[0] = 0.000000
TanArr[1] = 0.087489
TanArr[2] = 0.176327
TanArr[3] = 0.267949
TanArr[4] = 0.363970
TanArr[5] = 0.466308
TanArr[6] = 0.577350
TanArr[7] = 0.700208
TanArr[8] = 0.839100
TanArr[9] = 1.000000
TanArr[10] = 1.191754
TanArr[11] = 1.428148
TanArr[12] = 1.732051

Initial area (sum at x(0) and x(12)) = 1.732051

The value of the sum after the loop is: 15.929255

Trapezoidal result is: 0.695045
Real result is: 0.693147