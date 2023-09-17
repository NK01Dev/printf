#include "main.h"
/**
*_printf - Printf function
*@format: format.
*Return: Printed chars.
**/

int _printf(const char *format, ...)
{

	int charprinted = 0;
	va_list args_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			charprinted++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == 'c')
			{
				char ch = va_arg(args_list, int);

				write(1, &ch, 1);
			}
			if (*format == 's')
			{
				char *string = va_arg(args_list, char *);
				int string_len = strlen(string);

				write(1, string, string_len);
				charprinted += string_len;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				charprinted++;
			}
		}
		format++;
	}
	va_end(args_list);
	return (charprinted);
}