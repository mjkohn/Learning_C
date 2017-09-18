/* Learning I/O - file copy */
/* From The C Programming Language - Section 1.4 */

/* Standard Input/Output */
#include <stdio.h>

int main()
{
  int c;

  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
}
