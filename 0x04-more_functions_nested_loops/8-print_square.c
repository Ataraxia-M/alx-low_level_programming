#include "main.h"

/**
 * print_square - check for a digit
 * 
 * Return:void
 */

void print_square(int n)
{

	int i, j;
	i = 0;
	
	while (i < n && n > 0)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
