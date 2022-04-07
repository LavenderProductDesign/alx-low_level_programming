#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
int _toint(char *s);
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to string arguments
 *
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (_toint(argv[1]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (_toint(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[1] == 48)
		num1 = 0;
	else
		num1 = _toint(argv[1]);
	if (*argv[2] == 48)
		num2 = 0;
	else
		num2 = _toint(argv[2]);
	printf("%ld\n", num1 * num2);
	return (0);
}

/**
 * _strlen - prints out the length of the specified string
 * @s: string which length is to be calculated
 *
 * Return: the length of the string (int)
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s)
	{
		size++;
		s++;
	}
	return (size);
}

/**
 * _toint - convert str to int
 * @s: string value
 *
 * Return: int value
 */
int _toint(char *s)
{
	int size, i, isNegative;
	long int number;

	size = _strlen(s);
	number = 0;
	isNegative = 0;
	for (i = 0; i < size; i++)
	{
		if (s[i] == 45)
		{
			isNegative = 1;
			continue;
		}
		else if (s[i] > 47 && s[i] < 58)
		{
			number = (number * 10) + (s[i] - 48);
			/* printf("%dth - %d\n", i, number); */
		}
		else
		{
			return (0);
		}
	}
	/* printf("%s => %ld : len - %d\n", s, number, size); */
	if (isNegative)
		return (-1 * number);
	return (number);
}
