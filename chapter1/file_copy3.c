/* Learning I/O - file copy */
/* From The C Programming Language - Exercise 1.6 */

/* Standard Input/Output */
#include <stdio.h>

int main()
{
  int c;

  /* This assigns a value of 0 or 1 to c */
  c = getchar() != EOF;
  
  if (c)
  {
    printf("I'm one\n");
  }
  else
  {
    printf("I'm not one\n");
  }
}
