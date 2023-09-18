#include "main.h"
/**
 * print_char - Prints a char
 * @format: format.
 * @buffer: Buffer array to handle print
 * Return: Number of chars printed
 */

int print_int(int num)
{
	char buffer[12];
	int printed = snprintf(buffer, sizeof(buffer), "%d", num);
	write(1, buffer, printed);
	return (printed);
}

int _printf(const char format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format != '\0')
	{
		if (format == '%')
		}
			format++;
			switch (format)
		{
		case 'i':
		case 'd':
		{
			int num = va_arg(args, int);
			count += print_int(num);
		}
		break;
		default:
			write(1, "%", 1);
			write(1, format, 1);
			count += 2;
			break;
		}
	}
	 else
	}
		write(1, format, 1);
		count++;
	}
	format++;
}

va_end(args);
return (count);
}
