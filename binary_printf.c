#include "main.h"

/**
 * binary_printf - prints a binary number
 * @num: number arguements
 * @prtd: the printed characters
 * Return: prtd charcaters
 */

int binary_printf(unsigned int num, int prtd)
{
	int binary[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		prtd++;
		return (prtd);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		prtd++;
	}

	return (prtd);
}
