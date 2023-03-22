//  Write a program to read an array of characters and convert all lowercase
//  characters to uppercase characters and vice versa.

#include <stdio.h>

int main() {
  int i;

  char str[] = {"abCDefGHi"};

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') { // if lowercase, convert to uppercase
      str[i] = str[i] - 32;
    } else if (str[i] >= 'A' &&
               str[i] <= 'Z') { // if uppercase, convert to lowercase
      str[i] = str[i] + 32;
    }
  }

  printf("Converted string: %s", str);

  return 0;
}
