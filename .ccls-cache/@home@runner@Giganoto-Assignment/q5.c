//  Write a program to sort an array of integers in ascending order using bubble
//  sort.
#include <stdio.h>

void bubble_sort(int arr[], int n) {
  int temp;
  // i is counter.
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // swap arr[j] and arr[j+1]
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {2, 4, 6, 22, 1, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Original array:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  bubble_sort(arr, n);

  printf("\nSorted array in ascending order:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}