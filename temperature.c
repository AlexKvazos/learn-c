#include <stdio.h>

#define LOWER  0 /* lower farenheit limit of table */
#define UPPER  300 /* upper farenheit limit of table */
#define STEP   20 /* step size */

int main() {
  float fahr, celsius;

  fahr = LOWER;
  while (fahr <= UPPER) {
    celsius = 5 * (fahr-32) / 9;
    printf("%3.0ff\t%6.1fc\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}