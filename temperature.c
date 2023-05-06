#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 400;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%3.0ff\t%6.1fc\n", fahr, celsius);
    fahr = fahr + step;
  }
}