#include "main.h"
/**
 ** _isalpha - check if the character is a letter
 ** @c: the character to be cheked
 ** Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
