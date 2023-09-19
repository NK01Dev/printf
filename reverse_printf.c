#include "main.h"

/**
 * reverse_printf - prints a binary number
 * @args: number of arguements
 * @prtd: the printed characters
 * Return: printed charcaters
 */

int reverse_printf(va_list args, int prtd)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		prtd++;
	}

	return (prtd);
}
