// Program to calculate the sum of the digits of a number

#include <stdio.h>

int main(void) {
  // Get input <toSum>
  int toSum;
  printf ("Enter number to compute: ");
  scanf ("%i", &toSum);

  // Calculate sum
  int accumulator = 0;

  while (toSum != 0) {
    accumulator += toSum % 10;
    toSum /= 10;
  }

  // Print sum
  printf ("Sum is: %i\n",accumulator);
  
  return 0;
}