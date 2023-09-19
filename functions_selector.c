#include "main.h"

/**
 *  functions_selector - selects the appropriate specifiers
 * @args: number of arguements
 * @prtd: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int functions_selector(const char *format, va_list args, int prtd)
{
	switch (*format)
	{
	case 'd':
	case 'i':
		prtd = int_printf(args, prtd);
		break;
	case 'c':
		_putchar(va_arg(args, int));
		prtd++;
		break;
	case 's':
		prtd = string_printf(args, prtd);
		break;
	case '%':
		_putchar('%');
		prtd++;
		break;
	case 'u':
		prtd = unsigned_printf(va_arg(args, unsigned int), prtd);
		break;
		break;
	default:
		break;
	}
	return (prtd);
}
