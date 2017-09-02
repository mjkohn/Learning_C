#include <stdio.h>

/* Use integer division to find the temps from
   0 - 300 F to Celsius
*/

int main()
{

  float fahr;

  printf("DegF  DegC\n");
  for (fahr = 0; fahr <= 300; fahr = fahr + 20){
    printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr -32));
  }
}
