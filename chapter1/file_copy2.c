/* Learning I/O - file copy */
/* From The C Programming Language - Section 1.5 */

/* Standard Input/Output */
#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
}
