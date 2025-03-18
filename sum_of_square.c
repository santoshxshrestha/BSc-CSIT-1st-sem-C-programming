//sum of square of all the elements in the principle diagonal of a square matrix
#include <stdio.h>
int main() {
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid order of matrix\n");
        return 0;
    }
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            printf("Enter element for position [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i<n; i++ ) {
        for (int j = 0; j<n; j++){
            if (i == j ) {
                sum += matrix[i][j] * matrix[i][j];
            }
        }
    };
    printf("Sum of square of all the elements in the principle diagonal of the matrix is: %d\n", sum);

}
