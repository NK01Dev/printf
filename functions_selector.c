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
		prtd = integer_printf(args, prtd);
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
	//case 'b':
		//prtd = binary_printf(va_arg(args, unsigned int), prtd);
	//	break;
	//case 'x':
	//case 'X':
	//	prtd = hex_printf(va_arg(args, unsigned int), prtd, (*format == 'X') ? 1 : 0);
	//	break;
	//case 'o':
	//	prtd = octal_printf(va_arg(args, unsigned int), prtd);
	//	break;
	case 'u':
		prtd = unsigned_printf(va_arg(args, unsigned int), prtd);
		break;
	//case 'r':
	//	prtd = reverse_printf(args, prtd);
		break;
	//case 'p':
	//	prtd = pointer_printf(args, prtd);
	//	break;
	default:
		break;
	}
	return (prtd);
}
