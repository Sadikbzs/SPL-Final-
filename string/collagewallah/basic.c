#include <stdio.h>

int main() {
    int m, n, p;
    
    // Input dimensions
    printf("Enter values of m, n and p: ");
    scanf("%d %d %d", &m, &n, &p);

    int A[m][n], B[n][p], M[m][p];

    // Input Matrix A
    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of matrix B (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply A and B to get M
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            M[i][j] = 0;
            for (int k = 0; k < n; k++) {
                M[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output Resulting Matrix M
    printf("Resultant matrix M (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
