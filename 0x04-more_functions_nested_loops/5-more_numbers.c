#include "main.h"
/**
 ** more_numbers - print numbers (0 to 14)
 ** ten times
 ** Return: 0 (success)
 */

void more_numbers(void)
{

	int i;
	int j;

	for (j = 0; j < 10 ; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);

			}
		}

		_putchar('\n');
	}
}
