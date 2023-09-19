#include "main.h"

/**
 * print_d - prints a number
 * @num: the number to print
 * Return: the length of the number
 */

int print_d(int num)
{
int i = 0;
if (num < 0)
{
write(1, "-", 1);
i++;
num = -num;
}

int divisor = 1;
while (num / divisor > 9)
{
divisor *= 10;
}
while (divisor > 0)
{
int digit = (num / divisor) % 10;
char digit_char = '0' + digit;
write(1, &digit_char, 1);
i++;
divisor /= 10;
}
return (i);
}
