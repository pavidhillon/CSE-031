#include <stdio.h>

/*
 * Read a set of values from the user.
 * Store the sum in the sum variable and return the number of values read.
 */

/* 
 * You CANNOT declare any global variables.
 * DO NOT change the definition of the read_values function when it comes to 
 * adding/removing function parameters, or changing its return type. You may, 
 * however, modify the single function parameter and the body of the function if 
 * you wish. 

 * Use GDB or LLDB to discover and fix errors.
 */
int read_values(double *sum) {
  int values = 0, input = 0;
  *sum = 0;
  printf("Enter input values (enter 0 to finish):\n");
  scanf("%d", &input);
  while(input != 0) {
    values++;
    *sum += input;  // Dereference the pointer to modify the original sum
    scanf("%d", &input);
  }
  return values;
}

int main() {
  double sum = 0;
  int values;
  values = read_values(&sum);  // Pass the address of sum
  printf("\nAverage: %g\n", sum/values); // Now sum is correctly updated
  return 0;
}
