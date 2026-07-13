#include <stdio.h>
/**
 * main - choosing what arithmitic using
 *
 * Return: 0 always
 */

int main(void)
{
	int user;

	printf("What would you like to use?\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	printf("Choice: ");
	scanf("%d", &user);

	while (user != 0)
	{
		if (user == 1)
		{
			add();
			break;
		}
		else if (user == 2)
		{
			subtract();
			break;
		}
		else if (user == 3)
		{
			mult();
			break;
		}
		else if (user == 4)
		{
			divide();
			break;
		}
		else
		{
			printf("Invalide Choice\n", user);
			break;
		}
	printf("Choice: ");
	scanf("%d", &user);
	}
printf("Bye\n");
return (0);
}
