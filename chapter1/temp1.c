#include <stdio.h>

/* Calculate C from F
   for all values 0 - 300
   with 20 F step */

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper){
    /* Uses integer division not the best
       could use floats to get more precise
       results.
    */
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
