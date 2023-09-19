#include "main.h"

/**
 * unsigned_printf - prints a binary number
 * @num: number of arguements
 * @prtd: the printed characters
 * Return: prtd charcaters
 */

int unsigned_printf(unsigned int num, int prtd)
{
	int digit = 0;
	unsigned int temp = num;

	do
	{
		digit++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		prtd++;
	}
	else
	{
		char unsigned_str[11];
		int i = 0;

		while (num != 0)
		{
			unsigned_str[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		for (i = digit - 1; i >= 0; i--)
		{
			_putchar(unsigned_str[i]);
			prtd++;
		}
	}
	return (prtd);
}
