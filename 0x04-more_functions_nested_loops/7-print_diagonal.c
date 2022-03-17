#include "main.h"
/**
 ** print_diagonal - prints a digonal line
 ** @n: number of time to print char '\'
 ** Return: 0 (success)
 */

void print_diagonal(int n)
{

	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{	
			for (j = i; j > 0 ; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');	
		}
	}

	else
	{	_putchar('\n');

	}
}
