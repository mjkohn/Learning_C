#include <stdio.h>

/* Use integer division to find the temps from
   0 - 300 F to Celsius
*/

int main()
{

  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("DegF  DegC\n");
  while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr -32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
