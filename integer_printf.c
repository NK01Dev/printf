#include "main.h"

/**
 * int_printf - prints intiger number
 * @args: number arguements
 * @prtd: the printed characters
 * Return: printed charcaters
 */
int int_printf(va_list args, int prtd)
{
int num = va_arg(args, int);
if (num < 0)
{
_putchar('-');
prtd++;
num = -num;
}
if (num / 10 != 0)
{
prtd = int_printf_helper(num / 10, prtd);
}
_putchar('0' + (num % 10));
prtd++;
return (prtd);
}
/**
 * int_printf_helper - recursive print
 * @num: given number
 * @prtd: the printed characters
 * Return: printed charcaters
 */
int int_printf_helper(int num, int prtd)
{
if (num / 10 != 0)
{
prtd = int_printf_helper(num / 10, prtd);
}
_putchar('0' + (num % 10));
prtd++;
return (prtd);
}
