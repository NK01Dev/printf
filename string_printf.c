#include "main.h"

/**
 * string_printf - prints a string
 * @args: numberof arguements
 * @prtd: the printed characters
 * Return: prtd charcaters
 */

int string_printf(va_list args, int prtd)
{
	char *strg = va_arg(args, char *);

	while (*strg != '\0')
	{
		_putchar(*strg);
		prtd++;
		strg++;
	}
	return (prtd);
}

