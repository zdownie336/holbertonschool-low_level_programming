#include "main.h"

/**
* times_table - print times table in a table format
*
* Return: always void
*/
void times_table(void)
{
int i;
int j;
int table;

for (i = 0; i <= 9; i++)
{
_putchar('0');

for (j = 1; j <= 9; j++)
{
table = i * j;
_putchar(',');
_putchar(' ');
if (table < 10)
{
_putchar(' ');
_putchar(table + '0');
}
else
{
_putchar(table / 10 + '0');
_putchar(table % 10 + '0');
}
}
_putchar('\n');
}
}i
