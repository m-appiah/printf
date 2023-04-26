#include "main.h"

/** 
 * print_rev - frunction to print in reverse
 * @r: string to be reversed
 *
 * Return: nothing
 */
void print_rev(char *r)
{
	if (*r != '\0')
	{
		_print_rev_recursion(r + 1);
		_putchar(*r);
	}
}
