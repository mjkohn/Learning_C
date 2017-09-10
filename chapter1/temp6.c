/* Learning symbolic Constants with temperature example */
/* From The C Programming Language - Section 1.4 */

/* Standard Input/Output */
#include <stdio.h>

/* Define Symbolic Constants */
#define LOWER 0
#define UPPER 300
#define STEP  20

/* Print F/C Table */
int main ()
{
  int fahr;

  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
  {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
}
