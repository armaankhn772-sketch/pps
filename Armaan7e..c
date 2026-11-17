\\WAP Write a C program to read two 2 × 2 matrices and print their sum. Enter the first matrix row by row, followed by the second matrix row by row.
#include<stdio.h>
int main() {
    int matrix1[2][2], matrix2[2][2], sum[2][2];

    printf("Enter elements of the first 2x2 matrix (row by row):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second 2x2 matrix (row by row):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
