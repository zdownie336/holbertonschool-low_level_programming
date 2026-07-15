#include <stdio.h>

/**
 * add - used for addition of two integars
 * @anum1: for first digit
 * @anum2: for second digit
 */

void add(void)
{
	int anum1;
	int anum2;

	printf("A: ");
	scanf("%d", &anum1);
	printf("B: ");
	scanf("%d", &anum2);

	printf("Results: %d\n", anum1 + anum2);
	}

/**
 * subtract - used to subtract two integars
 * @snum1: for first digit
 * @snum2L for second digit
 */

void subtract(void)
{
	int snum1;
	int snum2;

	printf("A: ");
	scanf("%d", &snum1);
	printf("B: ");
	scanf("%d", &snum2);

	printf("Results: %d\n", snum1 - snum2);
}

/**
 * mult - to multipy two integars
 * @mnum1: integar one
 * @mnum2: integar two
 */

void mult(void)
{
	int mnum1;
	int mnum2;

	printf("A: ");
	scanf("%d", &mnum1);
	printf("B: ");
	scanf("%d", &mnum2);

	printf("Results: %d\n", mnum1 * mnum2);

}


/**
 * divide - used for division of two integars besides 0
 * @dnum1: first integar
 * @dnum2: second integar, error if zero
 */

void divide(void)
{
	int dnum1;
	int dnum2;

	printf("A: ");
	scanf("%d", &dnum1);
	printf("B: ");
	scanf("%d", &dnum2);

	if (dnum2 == 0)
	{
		printf("Error: division by zero\n");
	}
	else
	{
		printf("Results: %.2f\n", (float)dnum1 / dnum2);
	}
}

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

	while (user != 0)
	{
		printf("Choice: ");
		scanf("%d", &user);

		if (user == 1)
		{
			add();
			continue;
		}
		else if (user == 2)
		{
			subtract();
			continue;
		}
		else if (user == 3)
		{
			mult();
			continue;
		}
		else if (user == 4)
		{
			divide();
			continue;
		}
		else if (user == 0)
		{
			break;
		}
		else
		{
			printf("Invalide Choice\n");
			printf("Choice: ");
			scanf("%d", &user);
		}
	}
printf("Bye\n");
return (0);
}
