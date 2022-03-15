#include <unistd.h>
#include "main.h"

/**
 * main - print the word "_putchar"
 * Description: using the main fuction
 * Return: Always 0 (Success)
*/

int main(void)
{
int i;
char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
	_putchar(p[i]);
	}
	_putchar('\n');
return (0);
}
