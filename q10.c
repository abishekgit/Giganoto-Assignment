//  Write a program to find the transpose of a matrix using pointers
#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
  int matrix[ROWS][COLS] = {{1, 2, 3}, {3, 4, 5}};
  int transpose[COLS][ROWS];
  int i, j;

  // find the transpose of the matrix using pointers
  for (i = 0; i < COLS; i++) {
    for (j = 0; j < ROWS; j++) {
      *(transpose[i] + j) = *(matrix[j] + i);
    }
  }

  // print the original matrix
  printf("Original Matrix:\n");
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  // print the transpose of the matrix
  printf("Transpose of the Matrix:\n");
  for (i = 0; i < COLS; i++) {
    for (j = 0; j < ROWS; j++) {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}
