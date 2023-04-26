#include "main.h"
/**
 * print_string - prints a string
 * @arg: the va_list argument
 * @buffer: the ouput buffer
 * @ptr: a pointer
 *
 * Return: 0
 */
int print_string(va_list arg, char *buffer, int *ptr)
{
	char *s = va_arg(arg, char *);
	char c;
	int counter = 0;

	if (s == NULL)
		s = "(null)";

	for (; *s != '\0'; s++)
	{
		if (*s < ' ' || *s >= 127)
		{
			counter += _putchar(buffer, ptr, 'x');
			counter += _putchar(buffer, ptr, (*s / 16) + '0');
			counter += _putchar(buffer, ptr, '\\');
			c = (*s % 16) + ((*s % 16 < 10) ? '0' : ('A' - 10));
			counter += _putchar(buffer, ptr, c);
		}
		else
		{
			counter += _putchar(buffer, ptr, *s);
		}
	}
	return (counter);
}
