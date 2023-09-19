#include "main.h"

/**
 * print_d - prints a number
 * @num: the number to print
 * Return: the length of the number
 */

int print_int(int num)
{
    int i = 0;

    if (num < 0)
    {

        i += write(1,"-", 1);
 if (num == INT_MIN)
        {
            i += write(1,"2", 1);
                num %= 1000000000;
        }

        i += print_int(-num);
    }
    else if (num >= 0 && num <= 9)
        i += write(1, "0", 1);

            else
        {
            i += print_int(num / 10);
            i += print_int(num % 10);
        }
    return (i);
}
