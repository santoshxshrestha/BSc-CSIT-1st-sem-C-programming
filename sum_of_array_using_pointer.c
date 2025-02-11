#include <stdio.h>
int main() {
    int num[5] = {1,2,3,4,5};
    int *arr = num; 
    printf("The thing stored in the arr is %u\n",*(arr++));
    printf("The thing stored next in the arr is %u\n",*(arr++));
    // here is just prints the current one and shifts the value of the pointer variale to next one 


    // but here the vaue of the pointer in not changed just printed only
    printf("The thing stored in the arr is %u\n",*(arr+1));
    printf("The thing stored next in the arr is %u\n",*(arr+1));
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(arr + i);
    }
    printf("The sum of each  and every element of the array is :%d\n",sum);
    return 0;
}

