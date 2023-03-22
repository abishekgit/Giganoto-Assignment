// Write a program to reverse a string using pointers.
#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "Hello World!";
  char *start = str;
  char *end = str + strlen(str) - 1;
  // str is added to calculate memory address of last based on it.

  // Swap characters using pointers
  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }

  printf("Reversed string: %s\n", str);
  return 0;
}
