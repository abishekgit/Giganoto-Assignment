//  Implement a function that takes a string as input and returns the first
//  non-repeated character in the string.

#include <stdio.h>
#include <string.h>

char findFirstNonRepeatedChar(char *str) {
  int len = strlen(str);
  int freq[128] = {
      0}; // Frequency array to count the occurrence of each character
  int i;

  // Count the frequency of each character in the string
  for (i = 0; i < len; i++) {
    freq[(int)str[i]]++;
  }

  // Find the first non-repeated character in the string
  for (i = 0; i < len; i++) {
    if (str[i] == ' ') {
      continue;
    }
    if (freq[(int)str[i]] == 1) {
      return str[i];
    }
  }

  return '\0'; // Return null character if no non-repeated character is found
}

int main() {
  char str[] = "Hello World!";
  char result = findFirstNonRepeatedChar(str);

  if (result == '\0') {
    printf("No non-repeated character found.\n");
  } else {
    printf("The first non-repeated character in the string is: %c\n", result);
  }

  return 0;
}
