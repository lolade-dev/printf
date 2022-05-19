#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - Entry point to reproduce the printf function
 * @format: input string
 * Return: value of chars
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j = 0, sum = 0;
	char *str = NULL;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(ap, int));
				sum++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(ap, char *);
				while (str[j] != '\0')
				{
					_putchar(str[j]);
					sum++;
					j++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				sum++;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(ap);

	return (sum);
}
