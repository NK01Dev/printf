#include "main.h"

/**
 * char_printf - prints a binary number
 * @args: the arguements to use
 * @prtd: the printed characters
 * Return: prtd charcaters
 */

int char_printf(va_list args, int prtd)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (prtd + 1);
}
