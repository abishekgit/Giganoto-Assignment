//  Write a program that reads in an array of integers and removes all
//  duplicates from the array.

#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 2, 3, 4, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int i, j, k;

  // remove duplicates
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n;) {
      if (arr[j] == arr[i]) {
        for (k = j; k < n; k++) {
          arr[k] = arr[k + 1];
        }
        n--;
      } else {
        j++;
      }
    }
  }

  // print the new array
  printf("New Array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
