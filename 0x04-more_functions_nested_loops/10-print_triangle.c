#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = 1;
			k = i + 1;
			while (j < (size - 1))
			{
				_putchar(32);
				j++;
			}
			while (k > 0)
			{
				_putchar(35);
				k--;
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
