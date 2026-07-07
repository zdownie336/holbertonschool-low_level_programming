#include <stdlib.h>
#include <time.h>
#include <math.h>
/*
 * main - generates random number and prints out if pos or neg
 *
 * Return: always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printdf("%d is 0\n", n);
}
return (0);
}
