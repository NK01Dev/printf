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
if (format == NULL)
{
return (-1);
}
while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
count++;
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
while (*str != '\0')
{
write(1, str, 1);
str++;
count++;
}
}
else if (*format == '%')
{
write(1, "%", 1);
count++;
}
else
{
write(1, "%", 1);
write(1, format, 1;
count += 2;
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

