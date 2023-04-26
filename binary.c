#include "main.h"
#include <limits.h>

/**
 * binary - print binary
 * @n: output unsigned int
 *
 * Return: nothing
 */
void binary(unsigned int n)
{
	if (n > 1)
		binary(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * _printf - print formated string
 * @format: output format
 *
 * Return:0
 */
int _printf(const char *format, ...)
{
	va_list args;
	int output = 0;
	unsigned int n;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'b')
			{
				n = va_arg(args, unsigned int);
				binary(n);
				output += sizeof(unsigned int) * CHAR_BIT;
			}
		}
		else
		{
			_putchar(*format);
			output++;
		}

	format++;
	}

	va_end(args);

	return (output);
}
