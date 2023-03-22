//  Implement a function that takes an array of integers as input and returns
//  the median value using pointers.
#include <stdio.h>
#include <stdlib.h>

double find_median(int *arr, int size) {
  double median;
  int *ptr;

  // Sort the array in ascending order using selection sort algorithm
  for (int i = 0; i < size - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
      if (*(arr + j) < *(arr + min_index)) {
        min_index = j;
      }
    }
    int temp = *(arr + i);
    *(arr + i) = *(arr + min_index);
    *(arr + min_index) = temp;
  }

  // Find the median of the sorted array
  if (size % 2 == 0) {
    ptr = arr + size / 2 - 1;
    median = (*(ptr) + *(ptr + 1)) / 2.0;
  } else {
    ptr = arr + size / 2;
    median = *ptr;
  }

  return median;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 1, 2, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  double median = find_median(arr, size);

  printf("Median = %0.1f", median);

  return 0;
}
