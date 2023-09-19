#include "main.h"

#define MAX_HEX_DIGITS 16

/**
 * pointer_printf - prints a binary number
 * @args: numberof arguements
 * @prtd: the printed characters
 * Return: printed charcaters
 */

int pointer_printf(va_list args, int prtd)
{
	void *ptr = va_arg(args, void *);
	unsigned long num = (unsigned long)ptr;
	int digits = 0;
	int i;
	unsigned long temp = num;
	char X_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];

	while (temp != 0)
	{
		digits++;
		temp /= 16;
	}

	prtd += _putchar('0');
	prtd += _putchar('x');

	if (num == 0)
	{
		prtd += _putchar('0');
	}
	else
	{
		for (i = digits - 1; i >= 0; i--)
		{
			int digit = num % 16;

			hex[i] = X_digits[digit];
			num /= 16;
		}
		for (i = 0; i < digits; i++)
		{
			prtd += _putchar(hex[i]);
		}
	}
	return (prtd);
}
