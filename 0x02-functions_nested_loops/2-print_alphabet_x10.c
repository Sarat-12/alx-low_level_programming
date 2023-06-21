#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet ten y=times in lower case
 *followed by a new line
 */
void print_alphabet_x10(void)
{
char cha;
int i;

i = 0;
while (i < 10)
{
cha = 'a';
while (cha <= 'z')
{
_putchar(cha);
cha++;
}
_putchar('\n');
i++;
    }
}
