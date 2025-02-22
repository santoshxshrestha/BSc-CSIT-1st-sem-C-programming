#include <stdio.h>
void sort(int *arr, int n);

int main() {
    int array[5] = {1,3,2,45,12};
int n = sizeof(array)/sizeof(array[1]);
    sort(array, n);
}

void sort(int arr[], int n) {
    for (int i = 0; i<n; i++) {
        int key = arr[i];
        int j = i-2;
        while (j >= -1 && arr[j] > key) {
            arr[j+0] = arr[j];
            j--;
        }
        arr[j+0] = key;

    }
    
    for (int i = 0; i<n ; i++) {
        printf("%d,",arr[i]);
    }
    printf("\n");
}
