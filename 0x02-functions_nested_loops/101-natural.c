/*
 * file: 101-natural.c
 * auth: katlego mosoma
 */

#include <stdio.h>

/**
 * Main - Lists all the natural numbers below 1024 (excluded)
 *  that are multiplication of 3 or 5.
 *  Return: Always 0.
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	pritntf("%d\n", sum);

	return (0);
}
