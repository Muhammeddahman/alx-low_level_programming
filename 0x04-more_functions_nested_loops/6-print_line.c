#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *	should be printed
 *
 */

void print_line(int n)
{
	int lnChr;

	if (num <= 0)
		_putChar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putChar('_');
		_putchar('\n');

	}
}
