#include "magic_square.h"
#include <stdbool.h>

bool isMagicSquare(int **matrix, int n) {
    if (n <= 0) {
        return false;
    }

    int magicSum = (n * (n * n + 1)) / 2;
    int diagSum1 = 0, diagSum2 = 0;

    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != magicSum || colSum != magicSum) {
            return false;
        }
        diagSum1 += matrix[i][i];
        diagSum2 += matrix[i][n - i - 1];
    }

    return diagSum1 == magicSum && diagSum2 == magicSum;
}
