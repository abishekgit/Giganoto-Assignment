//   Implement a function that takes an array of integers as input and returns
//   the average of the array using dynamic programming.

#include <stdio.h>
#include <stdlib.h>
// av is average so far.

double average(int arr[], int n) {
  double av[n];
  av[0] = arr[0];
  for (int i = 1; i < n; i++) {
    av[i] = av[i - 1] + (arr[i] - av[i - 1]) / (i + 1);
  }
  return av[n - 1];
}

int main() {
  int arr[] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  double avg = average(arr, n);
  printf("The average of the array is: %lf\n", avg);
  return 0;
}
