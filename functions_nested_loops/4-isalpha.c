#include "main.h"

/**
* _isalpha - checks if charater is alphabetical or numerical
*@c: check
*
* Return: 1 if character is alphabetical, lowercase or capital
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
