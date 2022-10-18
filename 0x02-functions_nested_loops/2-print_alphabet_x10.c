#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet in small letter
 */
void print_alphabet_x10(void)
{
int counter = 0;
char c;
while (counter++ <= 9)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
