//  Write a program that reads in a string and prints out the frequency of each
//  character in the string.
/* If we were to use int freq = 0, we would only be able to keep track of the
 * frequency of one character, rather than all the characters in the string.
 * Therefore, we need an array to store the frequency of each character, and the
 * size of the array should be at least as large as the number of distinct
 * characters in the character set. In this case, we have used an array with a
 * size of 128, which is the number of distinct ASCII characters. */

#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 128

int main() {
  char str[] = "Hello World!";
  int freq[ASCII_SIZE] = {0}; // Initialize frequency array to 0
  int i;

  // Calculate frequency of each character
  for (i = 0; i < strlen(str); i++) {
    freq[(int)str[i]]++;
  }

  // Print frequency of each character
  printf("Frequency of each character in the string \"%s\":\n", str);
  for (i = 0; i < ASCII_SIZE; i++) {
    if (freq[i] != 0) {
      printf("%c: %d\n", i, freq[i]);
    }
  }

  return 0;
}
