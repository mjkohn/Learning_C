#include <stdio.h>

/* Use integer division to find the temps from
   0 - 300 C to F
*/

int main()
{

  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("DegC  DegF\n");
  while (celsius <= upper){
    fahr = celsius * (9.0/5.0) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}