// write a c program to find the sum of n number enter by the user . allocae the memore to store in number s using malloc functin 
#include <stdlib.h>
#include<stdio.h>
int main() {
    int *ptr ,n,sum=0;
    printf("How many number you want to enter : ");
    scanf("%d",&n);
    ptr = (int *)malloc(sizeof(int) * n);

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i=0;i<n;i++) {
        printf(
            "Ener the numbers that you want to enter : "
        );
        scanf("%d",&ptr[i]);
       sum+=ptr[i]; 
    }
    printf("The sum of %d numbers is %d. \n",n,sum);
    free(ptr);
    return 0;
}
