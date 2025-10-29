#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void freeMatrix(int **mat, int rows) {
    for (int i = 0; i < rows; i++) {
        free(mat[i]);
    }
    free(mat);
}

int **allocateMatrix(int rows, int cols) {
    int **mat = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        mat[i] = (int *)malloc(cols * sizeof(int));
    }
    return mat;
}

void fillRandom01(int **mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = rand() % 2;
        }
    }
}

void printMatrix(int **mat, int rows, int cols, FILE *fp) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
            if (fp != NULL) fprintf(fp, "%d ", mat[i][j]);
        }
        printf("\n");
        if (fp != NULL) fprintf(fp, "\n");
    }
}

int **multiplyMatrices(int **A, int r1, int c1, int **B, int r2, int c2) {
    if (c1 != r2) {
        printf("Matrix multiplication not possible (cols of A != rows of B).\n");
        return NULL;
    }
    int **C = allocateMatrix(r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int **transposeMatrix(int **A, int rows, int cols) {
    int **T = allocateMatrix(cols, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            T[j][i] = A[i][j];
        }
    }
    return T;
}

int main() {
    srand(time(NULL));
    int r1, c1, r2, c2;

    printf("Enter rows and cols for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    int **A = allocateMatrix(r1, c1);
    int **B = allocateMatrix(r2, c2);

    fillRandom01(A, r1, c1);
    fillRandom01(B, r2, c2);

    FILE *fp = fopen("matrix_output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nMatrix A:\n");
    fprintf(fp, "Matrix A:\n");
    printMatrix(A, r1, c1, fp);

    printf("\nMatrix B:\n");
    fprintf(fp, "\nMatrix B:\n");
    printMatrix(B, r2, c2, fp);

    // Matrix multiplication
    int **C = multiplyMatrices(A, r1, c1, B, r2, c2);
    if (C != NULL) {
        printf("\nProduct of A and B:\n");
        fprintf(fp, "\nProduct of A and B:\n");
        printMatrix(C, r1, c2, fp);
    }

    // Transpose of A
    int **T = transposeMatrix(A, r1, c1);
    printf("\nTranspose of Matrix A:\n");
    fprintf(fp, "\nTranspose of Matrix A:\n");
    printMatrix(T, c1, r1, fp);

    fclose(fp);

    // Free memory
    freeMatrix(A, r1);
    freeMatrix(B, r2);
    if (C != NULL) freeMatrix(C, r1);
    freeMatrix(T, c1);

    printf("\nResults written to matrix_output.txt\n");

    return 0;
}
