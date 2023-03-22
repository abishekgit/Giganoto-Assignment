//  Write a program to reverse the elements of an array using pointers.
#include <stdio.h>

void reverse_array(int *arr, int size) {
  int *start = arr;
  int *end = arr + size - 1;
  while (start < end) {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  printf("Original Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  reverse_array(arr, size);

  printf("Reversed Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
