//   Write a program to find the largest and smallest element in an array using
//   pointers.

#include <stdio.h>

int main() {
  int arr[] = {10, 5, 12, 14, 100, 20};
  int n = sizeof(arr) / sizeof(arr[0]);
  int *ptr = arr;
  int *largest = ptr;
  int *smallest = ptr;

  for (int i = 0; i < n; i++) {
    if (*(ptr + i) > *largest) {
      largest = ptr + i;
    }
    if (*(ptr + i) < *smallest) {
      smallest = ptr + i;
    }
  }

  printf("Largest element: %d\n", *largest);
  printf("Smallest element: %d\n", *smallest);

  return 0;
}
