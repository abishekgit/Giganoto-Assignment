//   Write a program that reads in a string and removes all whitespace
//   characters from the string.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "Hello World!";
  char result[128];
  int i, j = 0;

  // Iterate through the string and copy non-whitespace characters to result
  for (i = 0; i < strlen(str); i++) {
    if (!isspace(str[i])) {
      result[j++] = str[i];
    }
  }

  result[j] = '\0'; // Add null character to the end of the result string

  printf("Original string: %s\n", str);
  printf("String with whitespace removed: %s\n", result);

  return 0;
}
