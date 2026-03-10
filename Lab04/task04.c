#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows for first matrix (m): ");
    scanf("%d", &m);
    printf("Enter number of columns for second matrix (n): ");
    scanf("%d", &n);

    int matrixA[m][1]; 
    int matrixB[1][n]; 
    int result[m][n]; 

    printf("Enter elements of first matrix (column vector):\n");
    for (int i = 0; i < m; i++) {
        printf("Element [%d][0]: ", i);
        scanf("%d", &matrixA[i][0]);
    }

    printf("Enter elements of second matrix (row vector):\n");
    for (int j = 0; j < n; j++) {
        printf("Element [0][%d]: ", j);
        scanf("%d", &matrixB[0][j]);
    }

    // Multiply matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrixA[i][0] * matrixB[0][j];
        }
    }

    // Display first matrix
    printf("\nFirst Matrix (m x 1):\n");
    for (int i = 0; i < m; i++) {
        printf("%5d\n", matrixA[i][0]); 
    }

    // Display second matrix
    printf("\nSecond Matrix (1 x n):\n");
    for (int j = 0; j < n; j++) {
        printf("%5d", matrixB[0][j]); 
    }
    printf("\n");

    // Display resulting matrix
    printf("\nResulting Matrix (m x n):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", result[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
