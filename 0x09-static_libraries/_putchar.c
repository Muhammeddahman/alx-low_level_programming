#include "unistd.h"

/**
 * _putchar - writas the character c to stdout
 * @c: the character to print
 *
 * Return: on  success 1
 * on error, -1 ir returned, and errors is not appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
