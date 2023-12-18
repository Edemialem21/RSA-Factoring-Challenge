#include "factors.h"

/**
 * factorize - factorize the number inputed into it
 * @number: the input number
 * Return: always success
 */

void factorize(int number)
{
	int i;

	for (i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			printf("%d=%d*%d\n", number, i, number / i);
			return;
		}
	}
}
