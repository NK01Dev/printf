#include "main.h"

/**
 * octal_printf - prints a binary number
 * @num: number of arguements
 * @prtd: the printed characters
 * Return: prtd charcaters
 */

int octal_printf(unsigned int num, int prtd)
{
	int oct[100], i = 0, j;

	while (num != 0)
	{
		int r = num % 8;

		oct[i] = 48 + r;
		i++;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		prtd++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			prtd++;
		}
	}
	return (prtd);
}

