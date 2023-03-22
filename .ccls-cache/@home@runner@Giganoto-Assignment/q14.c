//   Write a program that reads in a matrix of integers and calculates the sum
//   of the diagonal elements.

#include <stdio.h>

int main() {
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j, sum = 0;

  // calculate sum of diagonal elements
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (i == j) {
        sum += matrix[i][j];
      }
    }
  }

  printf("The sum of diagonal elements is: %d\n", sum);
  return 0;
}
