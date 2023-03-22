//  Write a program to find the sum of the digits of a number using recursion.

#include <stdio.h>

int sumOfDigits(int num);

int main() {
  int num = 1024;
  int sum = sumOfDigits(num);

  printf("The sum of digits of %d is %d.\n", num, sum);

  return 0;
}

int sumOfDigits(int num) {
  if (num == 0) {
    return 0;
  } else {
    return (num % 10 + sumOfDigits(num / 10));
  }
}
