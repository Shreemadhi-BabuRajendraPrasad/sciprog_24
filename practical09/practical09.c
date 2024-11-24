#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

#define MAX_FILE_NAME 100

int countLines(const char *filename);

int main() {
    char filename[MAX_FILE_NAME];

    printf("Enter file name: ");
    scanf("%s", filename);

    int n = countLines(filename);
    if (n <= 0) {
        printf("Error: Invalid file or no lines in file.\n");
        return 1;
    }

    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int **matrix = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(file, "%d", &matrix[i][j]);
        }
    }

    fclose(file);

    if (isMagicSquare(matrix, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

int countLines(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Could not open file.\n");
        return -1;
    }

    int count = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    fclose(file);
    return count;
}
