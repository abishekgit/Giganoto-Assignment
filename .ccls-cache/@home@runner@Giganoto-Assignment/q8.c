//   Write a program to find the sum of the first n natural numbers using
//   recursion.
#include <stdio.h>

int sum(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + sum(n - 1);
  }
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("The sum of the first %d natural numbers is %d", n, sum(n));
  return 0;
}
