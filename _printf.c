#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int prtd = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			prtd = functions_selector(format, args, prtd);
			format++;
		}
		else
		{
			_putchar(*format);
			prtd++;
			format++;
		}
	}
	va_end(args);
	return (prtd);
}
