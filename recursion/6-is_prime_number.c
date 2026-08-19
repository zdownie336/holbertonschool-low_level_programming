#include "main.h"




/**
 * guessfnc- function for guessing if number is prime or not.
 * @num: number
 * @g: guess.
 *
 * Return: 1 if prime, else 0
 */
int guessfnc(int num, int g)
{
	if (num % g == 0)
	{
		return (0);
	}

	if (g == num - 1)
	{
		return (1);
	}

	return (guessfnc(num, g + 1));
}
/**
* is_prime_number - finding if integar is a prime number
* @n: the number being checked
*
* Return: 1 if prime number, else 0
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (guessfnc(n, 2));
}
