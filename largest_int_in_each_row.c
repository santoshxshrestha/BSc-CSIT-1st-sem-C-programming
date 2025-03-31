//this program will find the greatest value in the each row of matrix of order P*Q 
#include <stdio.h>

int compare(int p, int q, int matrix[p][q] );

int main() {
    int p,q;
    printf("Enter the number of the rows in the matrix: ");
    scanf("%d",&p);

    printf("Enter the number of the cloumn in the matrix: ");
    scanf("%d",&q);

    int matrix[p][q];
    printf("\n");
    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i<p; i ++){
        for(int j = 0 ; j<q; j ++){
            printf("Enter element for the position matrix[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        };
    }

    compare( p,  q, matrix);

    return 0;
}


int compare(int p, int q, int matrix[p][q] ){
    int array[p];
    for(int i = 0 ; i < p; i++){
        array[i]=0;
        for(int j = 0 ; j<q; j++){
            if (array[i]<= matrix[i][j]){
                array[i] = matrix[i][j];
            };
        }
    }
    for(int i = 0 ; i< p; i ++){
        printf("The greatest value in the row %d is %d\n", i+1, array[i]);
    }

    return 0;
}
