#include "main.h"

/**
 * hex_printf - prints a binary number
 * @num: number arguements
 * @prtd: the printed characters
 * @UpCase: the uppercase equivalent
 * Return: prtd charcaters
 */

int hex_printf(unsigned int num, int prtd, int UpCase)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int r = num % 16;

		if (r < 10)
		{
			hex[i] = 48 + r;
		}
		else
		{
			if (UpCase)
			{
				hex[i] = 65 + (r - 10);
			}
			else
			{
				hex[i] = 97 + (r - 10);
			}
		}
		i++;
		num /= 16;
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
			_putchar(hex[j]);
			prtd++;
		}
	}
	return (prtd);
}
