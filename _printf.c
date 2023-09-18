#include "main.h"
/**
*_printf - Printf function
*@format: format.
*Return: Printed chars.
**/

int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

int count = 0;
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
{
char c = va_arg(args, int);
write(1, &c, 1);
count++;
}
break;
case 's':
{
char *str = va_arg(args, char *);
while (*str != '\0')
{
write(1, str, 1);
str++;
count++;
}
}
break;
case '%':
write(1, "%", 1);
count++;
break;
default:
write(1, "%", 1);
write(1, format, 1);
count += 2;
break;
}
}
else
{
write(1, format, 1);
count++;
}
format++;
}

va_end(args);
return (count);
}

