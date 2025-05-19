#include <stdio.h>
int main() {
  int arr[] = {1, 2, 3, 4, 6, 7, 8, 0};
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = length - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
