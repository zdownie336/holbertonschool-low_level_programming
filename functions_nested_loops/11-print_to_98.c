#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - list all integers from n to 98
 * @n: input amount
 *
 * Return: Always void
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++
}
}
else if (n > 98)
{
while (n > 98)
{
prinf("%d, ", n);
n--;
}
}
printf("98\n");
}
