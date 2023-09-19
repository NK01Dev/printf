#include "main.h"

/**
 * printf_integer - prints intiger number
 * @args: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int int_printf(va_list args, int prtd)
{
	int num = va_arg(args, int);
	int dgts = 0;
	int temp = num;
	int dgt;

	if (num < 0)
	{
		prtd += _putchar('-');
		num = -num;

		temp = num;
	}

	do
	{
		dgt++;
		temp /= 10;
	} while (temp != 0);

	while (dgts > 0)
	{
		int div = 1;
		int i;

		for (i = 1; i < dgts; i++)
		{
			div *= 10;
		}
		dgt = num / div;
		prtd += _putchar(dgt + '0');
		num -= dgt * div;
		dgts--;
	}
	return (prtd);
}
