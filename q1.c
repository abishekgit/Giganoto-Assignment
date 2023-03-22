// Write a program to read an array of integers and find the second largest and
// second smallest element in it.

#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 23, 21};
  int n = sizeof(arr) / sizeof(arr[0]); // calculate size of array

  int smallest, second_smallest, largest, second_largest;

  if (arr[0] < arr[1]) {
    smallest = arr[0];
    second_smallest = arr[1];
  } else {
    smallest = arr[1];
    second_smallest = arr[0];
  }
  largest = second_largest = second_smallest;

  for (int i = 2; i < n; i++) {
    if (arr[i] > largest) {
      second_largest = largest;
      largest = arr[i];
    } else if (arr[i] > second_largest && arr[i] != largest) {
      second_largest = arr[i];
    }
    if (arr[i] < smallest) {
      second_smallest = smallest;
      smallest = arr[i];
    } else if (arr[i] < second_smallest && arr[i] != smallest) {
      second_smallest = arr[i];
    }
  }

  printf("Second largest element: %d\n", second_largest);
  printf("Second smallest element: %d\n", second_smallest);

  return 0;
}
