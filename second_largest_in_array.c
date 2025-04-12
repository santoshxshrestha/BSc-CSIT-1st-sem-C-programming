#include <stdio.h>
int printer(int arr[],int n);
int second_largest(int arr[], int n);
int main() {
    int arr[] = {1,2,3,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The array here is: \n");
    printer(arr,n);

    second_largest(arr,n);
}

int second_largest(int arr[], int n){
    for(int i = 0; i<n; i++)  {
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("The second largest number in the given array is %d\n",arr[1]);
    return 0;
}

int printer(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        printf("%d\n",arr[i]);
    }
    return  0;
}
