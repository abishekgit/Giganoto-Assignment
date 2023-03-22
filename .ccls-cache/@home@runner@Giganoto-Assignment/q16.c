// Write a program that reads in a string and checks if it is a palindrome.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "RaceCar";
  int i, len, found = 0;

  len = strlen(str);

  // Convert string to lowercase
  for (i = 0; i < len; i++) {
    str[i] = tolower(str[i]);
  }

  for (i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      found = 1;
      break;
    }
  }

  if (found) {
    printf("%s is not a palindrome", str);
  } else {
    printf("%s is a palindrome", str);
  }

  return 0;
}
