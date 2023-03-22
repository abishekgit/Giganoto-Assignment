//   Write a program to read a string and count the number of vowels and
//   consonants in it.

#include <ctype.h>
#include <stdio.h>

int main() {
  char str[] = "Hello World!";
  int vowels = 0, consonants = 0;
  int i;

  for (i = 0; str[i] != '\0'; i++) {
    char ch = tolower(str[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      vowels++;
    } else if (isalpha(ch)) {
      consonants++;
    }
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of consonants: %d\n", consonants);

  return 0;
}
