#include <stdio.h>
void print(int arr[], int n);
void order(int arr[], int n);
int main() {
    int arr[] = {1,9,2,8,3,7,4,6,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("The initial array is :\n");
    print(arr, n);

    order(arr, n);


}
void print(int arr[], int n){
    for(int i = 0; i < n; i ++){
        printf("%d\n",arr[i]);
    }
}

void order(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("This is the array after sorting");
    print(arr, n);

}
