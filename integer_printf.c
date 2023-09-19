#include "main.h"

/**
 * integer_printf - prints intiger number
 * @args: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int integer_printf(va_list args, int prtd)
{
	int nbr = va_arg(args, int);
	int i = 0;
	int temp = nbr;
	int digits;

	if (nbr < 0)
	{
		prtd += _putchar('-');
		nbr = -nbr;

		temp = nbr;
	}

	do
	{
		i++;
		temp /= 10;
	} while (temp != 0);

	while (i > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < i; i++)
		{
			pow10 *= 10;
		}
		digits = nbr / pow10;
		prtd += _putchar(digits + '0');
		nbr -= digits * pow10;
		i--;
	}
	return (prtd);
}
