#include "main.h"
/**
 * print_sign - prints prints the sign of a number
 * @n: the number to be checked
 * Retutn: 1 if +ve, 0 if zero, -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
