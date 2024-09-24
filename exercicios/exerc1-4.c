#include <stdio.h>
int main() {

  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 100.0;
  step = 10.0;

  printf("Celsius para Fahrenheit\n");
  printf("-----------------------\n");

  celsius = lower;

  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;

  }

  return 0;

}
